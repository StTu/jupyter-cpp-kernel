#include <cstdlib>
#include <cstdio>
#include <dlfcn.h>

typedef int (*main_t)(int, char **, char **);

int main(int argc, char **argv, char **envp)
{
    char *error = NULL;

    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
    if (argc < 2) {
        fprintf(stderr, "USAGE: %s PROGRAM\nWhere PROGRAM is the user's program to supervise\n", argv[0]);
        return EXIT_FAILURE;
    }
    void *userhandle = dlopen(argv[1], RTLD_LAZY);
    if (userhandle == NULL) {
        fprintf(stderr, "%s: %s\n", argv[0], dlerror());
        return EXIT_FAILURE;
    }
    dlerror();
    void * usermain_handle=  dlsym(userhandle, "main");
    main_t usermain = (int (*)(int, char **, char **))usermain_handle;
    if ((error = dlerror()) != NULL) {
        fprintf(stderr, "%s: %s\n", argv[0], error);
        return EXIT_FAILURE;
    }

    /* Call Users main, but make master.c invisible by removing first argument */
    return usermain(argc-1, argv+1, envp);
}
