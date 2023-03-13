# Exercise 04

## What is a precompiled header? Name pros and cons:
A precompiled header is a file that contains a preprocessed version of frequently used headers, libraries, and other includes. When a source file is compiled, instead of reading and preprocessing the same headers and includes repeatedly, the compiler can simply load the precompiled header, which speeds up the compilation process considerably.
### pros
	- Faster Compilation
	- Consistency
	- Less Code Duplication
### cons
	- More Memory Usage. PCH Files can be quite large and loading them into memory can consume significant memory
	- Compatibilty Issues. PCH files might not compatible between different compilers and different versions of the same compiler
	- More Time to Compile the PCH - Increased Build Time (espacially for small projects)


## Describe the layer of abstraction with your own words:
There can be multiple layers of abstraction in a program. The layer of abstraction is the level of detail at which a program is written. The higher the level of abstraction, the more general the program is. The lower the level of abstraction, the more specific the program is. 
Examples of abstractions might be Seperation of Concerns or Encapsulation (only one Functionality, hide implementation details to improve security and risk of errors)
Also interfaces -> they hide the implementation details of a class and only show the public methods and properties.

## Name the SOLID principles and describe them briefly:
The acronym "**SOLID**" stands for:

**S** - Single Responsibility Principle (SRP)\
**O** - Open/Closed Principle (OCP)\
**L** - Liskov Substitution Principle (LSP)\
**I** - Interface Segregation Principle (ISP)\
**D** - Dependency Inversion Principle (DIP)

Here's a brief description of each principle:

Single Responsibility Principle (SRP): A class should have only one reason to change. This principle emphasizes the importance of designing classes that are focused on a single responsibility or concern, making them easier to understand, test, and maintain.

Open/Closed Principle (OCP): Software entities (classes, modules, functions, etc.) should be open for extension but closed for modification. This principle encourages developers to design software components that can be easily extended without modifying the existing code.

Liskov Substitution Principle (LSP): Subtypes should be substitutable for their base types. This principle emphasizes the importance of maintaining the contract between a class and its subclasses, ensuring that objects of the same type can be used interchangeably without affecting the correctness of the program.

Interface Segregation Principle (ISP): A client should not be forced to depend on methods it does not use. This principle emphasizes the importance of designing interfaces that are specific to the needs of their clients, avoiding unnecessary dependencies and increasing modularity.

Dependency Inversion Principle (DIP): High-level modules should not depend on low-level modules. Both should depend on abstractions. This principle emphasizes the importance of designing software systems with loosely-coupled, reusable components, allowing for easier changes and greater flexibility.