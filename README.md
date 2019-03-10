[![Build Status](https://img.shields.io/travis/CITemplate-project/CITemplate.svg)](https://travis-ci.org/CITemplate-project/CITemplate)
[![Code Coverage](https://img.shields.io/codecov/c/github/CITemplate-project/CITemplate.svg)](https://codecov.io/gh/CITemplate-project/CITemplate)

ABOUT CITemplate
===========

CITemplate is a cross-platform C++ example project template, designed to 
in C++ and uses Qt framework.

CITemplate  strives to be as easy to use as possible to bootstrap a project. Change the CITemplate for your own 
project name and you will have a project with continous integration and coverage. 

BUILDING CITemplate
==============

CITemplate  requires Qt 5.0 or higher.  It uses CMake as build system.

Build from command line:

    mkdir build
    cd build
    cmake ..
    cmake --build .

You can pass the following arguments to CMake:

    BUILD_SHARED                  to build with shared type library, otherwise static (default: true)
    BUILD_DOCUMENTATION           to build the documentation (default: false)
    BUILD_EXAMPLES                to build the examples (default: true)
    BUILD_TESTS                   to build the unit tests (default: true)

INSTALLING CITemplate
================

After building CITemplate, you can install the Headers, Libraries
and Documentation using the following command:

Install from command line:

    cmake --build . --target install

UNIT TESTS
=========

    cmake --build . --target test

EXAMPLES
========

Look at the example directory for various examples. Here is a description of
a few.

* *example_0*
This example .........
........


* *example_1*
Another example ......

DOCUMENTATION
=============

You can find the API documentation for the latest CITemplate version here:

http://doc.CITemplate.org/ NOTE: template for the link to your website.

SUPPORTED PLATFORMS
===================

It should work on all the platforms supported by Qt. For a complete list of
platforms support by Qt, see:

https://doc.qt.io/qt-5/supported-platforms.html

HOW TO REPORT A BUG
===================

If you think you have found a bug in CITemplate, we would like to hear about
it so that we can fix it. Before reporting a bug, please check if the issue
is already know at:

https://github.com/clairvoyant/CITemplate/issues

