# Exercise 02

## Describe a logging system with your own words:
A logging system is a system that allows you to log messages to a file or console. 
Often we don't know why a program works or doesn't work. With a logging system we can log all the information we want/need. There are different levels of logging, the most common are: trace, info, warning, debug, error, fatal. (ordered by severity)

## What is the difference between git submodules and git subtrees?
Both represent ways to inclkude external git repositories in your project.
The difference is that git submodules are a separate git repository and git subtrees are a part of your git repository.

For the logging system we used the spdlog library as a git submodule (see .gitmodules file). This means that the spdlog repository is a separate repository and we can update it independently from our project.

> Note: If someone clones the repository, submodules are not automatically cloned. You have to run `git submodule update --init --recursive` to clone the submodules.

## What is a build system in C++? Name 3 build systems: 
A build system helps you to build your project. It is used to compile your code, link libraries, run tests, etc. The main benefit is that you can use the same build system on different platforms (Windows, Linux, Mac, ...). 
Common build systems are: 
 - CMake
 - Make
 - Premake

## What is a package manager in C++? Name 3 package manager:
A package manager is a tool that helps you to manage dependencies. It allows you to install, update, remove packages.
Common package managers are:
 - [vcpkg](https://vcpkg.io/en/index.html)
 - [Conan](https://github.com/conan-io/conan)
 - [NuGet](https://devblogs.microsoft.com/cppblog/nuget-for-c/)

