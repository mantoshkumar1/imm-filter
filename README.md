# [1. Project Description](#project-description)
TODO: Ranjeet adds it

## [4. Used version for project development](#project-versions)
* Operating System: Windows 10
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
- Add the path of *eigen3* directory into  **Include Directories** and **Library Directories** 
 (Click *Project -> Properties -> VC++ Directories*)

#### [6.2. How to install GTest](#project-install-gtest)
In Visual Studio 2017 and later, Google Test is integrated into the Visual Studio IDE as a
default component of the Desktop Development with C++ workload. Click `Tools-Get Tools and Features`
and verify whether GTest is installed or not.
For more details, please visit this [link](https://docs.microsoft.com/en-us/visualstudio/test/how-to-use-google-test-for-cpp?view=vs-2019).

#### [2.4] Visual Studio
Version: Visual Studio 2019 (v142)
Configuration Manager:
    Active Solution Platform: x64
    Projects Platform: Win32

todo 1: Verify version of everything.

todo 2: To avoid possible config issue, following files are assumed unchanged. Change the git setting of
these config files once the project is complete.
ekf/ekf.vcxproj
ekf/ekf.vcxproj.filters
imm-filter.sln
test-ekf/packages.config
test-ekf/test-ekf.vcxproj
Link: https://wildlyinaccurate.com/git-ignore-changes-in-already-tracked-files/

