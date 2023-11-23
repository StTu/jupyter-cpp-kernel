# Minimal Cpp kernel for Jupyter

## Read Me First
This is a direct adaption of the Minimal C kernel for Jupyter by Brendan Rius making it suitable to use G++ instead of GCC.  All credit goes to Brendan Rius as I have only made minor changes to his original work.  The original C version can be found at: https://github.com/brendan-rius/jupyter-c-kernel


## Manual installation

Works only on Linux and OS X. Windows is not supported yet. If you want to use this project on Windows, please use Docker.


 * Make sure you have the following requirements installed:
  * g++
  * jupyter
  * python 3
  * pip

### Step-by-step:

 * Clone this repository
 * Run `pip install -U .` in the root of the repository
 * Run `install_cpp_kernel` to install the kernel
 * Run `jupyter notebook` and select the `Cpp` kernel when creating a new notebook

(Note: pip install jupyter_cpp_kernel is not supported)

## Example of notebook

![Example of notebook](example-notebook.png?raw=true "Example of notebook")

## Custom compilation flags

You can use custom compilation flags like so:

![Custom compulation flag](custom_flags.png?raw=true "Example of notebook using custom compilation flags")

Here, the `-lm` flag is passed so you can use the math library.

## License

[MIT](LICENSE.txt)
