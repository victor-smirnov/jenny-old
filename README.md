# Jenny
Jenny is an experimental opinionated programming language and metaprogramming [transpiler](https://en.wikipedia.org/wiki/Source-to-source_compiler) on top of and for C++ and [Memoria](https://bitbucket.org/vsmirnov/memoria/wiki/Home)

## Rationale
C++ has some painful points which are very hard to fix given the necessity to maintain compatibility with existing codebase. Jenny is a new language with the spirit of C++ (low level, zero-cost abstractions) but without its ancient legacy from 1980th. Simple things should be simple. But complex things should be simple too and only [advanced metaprogramming](https://en.wikipedia.org/wiki/Metaclass) will save us from a curse of descriptional complexity. What we definitely don't need is a new language competing with C++ that is not compatible with its existing codebase. Jenny will be able to use most of existing C++ libraries with minimal efforts. And some Jenny programs can be exported as C++ modules to use with C++ applications. So folks currently heavily investing in C++ should continue doing this. Jenny objects are C++ objects and vice versa, no bridging is necessary.

## Core Features

1. Extensible syntax for streamlined [DSL](https://en.wikipedia.org/wiki/Domain-specific_language) integration.
2. Native [SDN](https://bitbucket.org/vsmirnov/memoria/wiki/String%20Data%20Notation) integration for in-code embedded data structures and DSLs.
3. Type-level metaprogramming in large. Like C++ templates but with human-friendly syntax and debugging support.
4. Metaclasses and metaobjects. Compile-time AST-level metaprogramming (in large).
5. Lifetimes. Like Rust's borrwing sematics but much more flexible.
6. [AOP](https://en.wikipedia.org/wiki/Aspect-oriented_programming) and Contracts. The more semantics is made explicit, the better for refactoring.
7. Versioned (Git-like) Memoria store (in-memory, on-disk) as a physical program structure (instead of a bunch of a plain text files). Code and embedded data are in the same place, reachable with metacompiler and refactoring tools.
8. IDE-friendly event-driven dataflo-based transpiler architecture.
9. Embedded HTTP server providing native RESTful API for transpiler, refactoring tools, code and data.
10. ...

##
