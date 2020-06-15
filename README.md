# [1. Project Description](#project-description)
TODO: Ranjeet adds it

## [2. Development Machine Setup](#dev-machine-setup)
If you are developing over Ubuntu or MAC OS then skip to [Section 4](#editor-setting) and verify the version of relevant dependencies.

During the development of this project, Windows 10 was employed as operating system and WSL (Windows Subsystem for Linux) was used for development purposes. However, if you already have Ubuntu (version >= 20.04), you do not need to use WSL for this project development.

To install WSL-2 in Windows 10, please follow the steps of the following documentation published by Microsoft: https://docs.microsoft.com/en-us/windows/wsl/install-win10

## [3. Code Editor Settings (For WSL users only)](#editor-setting)
This is important if you choose to develop on WSL then it is advised to install Visual Studio Code on Windows. However, in this case, you also need to bind WSL's g++ compiler (execute `sudo apt install build-essential` in WSL to install C++ compiler) to Visual Studio Code. To setup WSL and Visual Studio Code, please follow this documentation released by Microsoft: https://code.visualstudio.com/docs/remote/wsl

Notice: If you have installed WSL 1 then you will face the known problem with the WSL file system implementation which denies permission while trying to rename a folder in the open workspace. To fix this issue, please follow this [link](https://code.visualstudio.com/docs/remote/wsl#_i-see-eaccess-permission-denied-error-trying-to-rename-a-folder-in-the-open-workspace).

## [4. Used version for project development](#project-versions)
* Operating System: Windows 10
* WSL: Ubuntu 20.04 LTS (Relevant only for Windows/Ubuntu OS)
* g++: 9.3.0 (C++11 standard compliant compiler)
* C++ Eigen template library: 3.3.7
* GTest unit testing library: 1.10.0

## [5. Contributors](#project-contributors)
- Ranjeet Kumar Tiwari
    - <todo-add-lenin-email-id@iitp.org>
    - www.linkedin.com/in/ranjeetk-iit
- Mantosh Kumar
    - <mantoshk234@gmail.com>
    - www.linkedin.com/in/mantoshk

## [6. Install dependencies](#project-install-dependencies)
This section details how to install dependencies of the project.
#### [6.1 How to install Eigen dependencies](#project-install-eigen)
- Download the 3.3.7 release from http://eigen.tuxfamily.org/
- Unpack the downloaded zip or tar.gz file to *PC\Documents\libraries* directory. You need to store the unpacked directory in your system.
- Rename the unpacked directory as **eigen3**. Note the path of this directory.
- Add the path of *eigen3* directory into  *Include Directories* and *Library Directories* 
 (Click *Project -> ekf Properties -> VC++ Directories*)

#### [6.2. How to install GTest](#project-install-gtest)
In Visual Studio 2017 and later, Google Test is integrated into the Visual Studio IDE as a
default component of the Desktop Development with C++ workload. To verify and more details,
please visit this [link](https://docs.microsoft.com/en-us/visualstudio/test/how-to-use-google-test-for-cpp?view=vs-2019).

#### [2.4] Visual Studio
Version: Visual Studio 2019 (v142)
Solution Platform: x86
Projects Platform: Win32

## [10. Notice for Ubuntu/MAC Users](#project-notice)
This README does not detail the steps required for development setups in Ubuntu/MAC OS because it is almost similar.
----------------------------

This README was written primarly for Ubuntu. However it also mentions configuration steps for OS X (MAC), though it is not tested as of now on OS X. If you are installing the required configuration, please only follow the steps marked with [OS X].

System Requirement: 
1. Install CMake
- version: 3.16.3
- sudo apt-get -y install cmake
- [OS X] brew install cmake


- ------------------- DELETE -------------------
- sudo apt-get install libeigen3-dev

- In Ubuntu, eigen library is installed in /usr/include/eigen3/
- Since the eigen library is installed in 'eigen3', you need to use '#include<eigen3/Eigen/***>' instead of '#include<Eigen/***>'
- [OS X] brew install eigen
- [OS X] Homebrew saves Eigen files in /usr/local/include/eigen3/
--------------------------------------------------------

3. Install Google Test
- Install version is 1.10.0
# https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/
sudo apt-get install libgtest-dev
cd /usr/src/gtest
cmake CMakeLists.txt
make
cd lib
sudo cp libgtest.a libgtest_main.a /usr/lib 

[OS X]: Leaving upto you to figure out how to instal googletest.

20. Possible 
