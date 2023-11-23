from setuptools import setup,find_packages


setup(name='jupyter_cpp_kernel',
      version='0.0.1',
      description='Minimalistic Cpp kernel for Jupyter',
      author='Stuart James heavily based on work of Brendan Rius',
      author_email='min_cpp@stuart-james.net',
      license='MIT',
      classifiers=[
          'License :: OSI Approved :: MIT License',
      ],
      url='https://github.com/StTu/jupyter-cpp-kernel/',
      download_url='https://github.com/StTu/jupyter-cpp-kernel/tarball/0.0.1',
      packages=['jupyter_cpp_kernel'],
      scripts=['jupyter_cpp_kernel/install_cpp_kernel'],
      keywords=['jupyter', 'notebook', 'kernel', 'cpp'],
      package_data={"pkg":["jupyter_c_kernel/resources/master.cpp"]},
      include_package_data=True
      )