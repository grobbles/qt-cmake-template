Qt-CMake-Template
===================


## Description

A Simple Qt5 Program template with CMake.

## Needed tools

-   CMake
-   Make
-   C++ compiler
-   GTest (https://github.com/google/googletest.git)
-   Qt

### Install GTest

-   checkout this repo "https://github.com/google/googletest.git" and install all with cmake
```bash
    git clone https://github.com/google/googletest.git
    cd googletest
    cmake .
    make install
```

-   install this lib with following command "sudo apt-get install libgtest-dev"
```bash
    sudo apt-get install libgtest-dev
    sudo apt-get install cmake
    cd /usr/src/gtest
    sudo cmake CMakeLists.txt
    sudo make

    # copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
    sudo cp *.a /usr/lib
```


## Start Development

Checkout this project

```bash
    git clone git@github.com:grobbles/qt-cmake-template.git
    cd qt-cmake-template
```

Run the main script to initialize the project

```bash
     ./run.sh -i
```

To build the project run the scpript with following command

```bash
     ./run.sh -b
```

Execute the program
```bash
     ./run.sh -s
```

## IDE

The qt cmake template project is optimized for:
-  visual studio code IDE.
-  qt creator 


## Git Workflow

-   master branch
-   feature branch
-   bugfix branch

If you want to add a new feature than create a new branch from master branch and commit your stuff to the branch. If you think you are done than create a merge request.

## Software versioning

It give three segments. "Major version"."Minor version"."Patch version"

1. Major version - incremented for backwards-incompatible changes
    - Major version must be incremented manually in the 'setup.py' file.
    - It will be read only the Major version from the file. The other version numbers will be ignore and will be override from script.
2. Minor version - incremented for new, backwards-compatible functionality is introduced to the API
    - Minor version will be incremented automatically if a feature branch merged in the master branch.
3. Patch version - incremented for backwards-compatible bug fixes
    - Patch version will be incremented automatically if a bugfix branch merged in the master branch.

Example:

```python
    0.9.0 # merge a bugfix branch
    0.9.1 # merge a bugfix branch
    0.9.2 # merge a bugfix branch
    ...
    0.9.10
    0.9.11
    1.0.0 # the project is in a stable state and can be release.
    1.0.1 # merge a bugfix branch
    1.1.0 # merge a feature branch
    2.0.0 # merge a feature branch with a incompatible API change
    2.0.1 # merge a bugfix branch
```

## LICENSE

MIT License