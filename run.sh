#!/bin/bash

APPLICATION_NAME=QtTemplate
CMAKE=/usr/bin/cmake

########################################################################################################
### Functions
function helpPage() {
    cat <<EOF

    -i, --initialize:           initialize the project and initialize the git submodules (gtest)

    -b, --buildAll:             build the all executables

    -c, --cleanProject:         clean the project

    -s, --start:                execute template

    -t, --test:                 execute template unit tests

    -h, --help:                 print the help page

EOF
}

function projectInitialize() {
    cmake . -B build
}

function cleanProject() {
    rm -rfv bin/
    rm -rfv build/
}

function buildAll() {
    $CMAKE . -B build
    $CMAKE --build $PWD/build --config Debug --target all -- -j 14
}

function test() {
    buildAll

    ./build/${APPLICATION_NAME}/tests/${APPLICATION_NAME}Tests
}

function start() {
    buildAll
    ./build/${APPLICATION_NAME}/main/$APPLICATION_NAME
}

########################################################################################################
### Main
case "$1" in
-i | --initialize)
    echo "projekt initialize"
    projectInitialize
    ;;

-b | --buildAll)
    echo "projekt build"
    buildAll
    ;;

-t | --test)
    echo "test"
    test
    ;;

-s | --start)
    echo "exectue the template"
    start
    ;;

-c | --cleanProject)
    echo "clean the project "
    cleanProject
    ;;

-h | --help | *)
    echo "print help page: "
    helpPage
    ;;
esac
