# Jenny
Jenny is an experimental opinionated imperative statically typed programming language and metaprogramming [transpiler](https://en.wikipedia.org/wiki/Source-to-source_compiler) on top of and for C++ and [Memoria](https://bitbucket.org/vsmirnov/memoria/wiki/Home). Currently, this project is meant to be mostly a showcase for Memoria framework.

## Rationale
C++ has some painful points which are very hard to fix given the necessity to maintain compatibility with existing codebase. Jenny is a new language with the spirit of C++ (low level, zero-cost abstractions) but without its ancient legacy from 1980ths. Simple things should be simple. But complex things should be simple too and only [advanced metaprogramming](https://en.wikipedia.org/wiki/Metaclass) will save us from a curse of descriptional complexity. What we definitely don't need is a new language competing with C++ that is not compatible with its existing codebase. Jenny will be able to use most of existing C++ libraries with minimal efforts. And some Jenny programs can be exported as C++ modules to use with C++ applications. So folks currently heavily investing in C++ should continue doing this. Jenny objects are C++ objects and vice versa, no bridging is necessary.

## Core Features

1. Extensible syntax for streamlined [DSL](https://en.wikipedia.org/wiki/Domain-specific_language) integration.
1. Native [SDN](https://bitbucket.org/vsmirnov/memoria/wiki/String%20Data%20Notation) integration for in-code embedded data structures and DSLs.
1. Type-level metaprogramming in large. Like C++ templates but with human-friendly syntax and debugging support.
1. Metaclasses and metaobjects. Compile-time AST-level metaprogramming (in large).
1. Lifetimes. Like Rust's borrwing sematics but much more flexible.
1. Native Fibers and Coroutines for high-performance IO.
1. Native integration with Memoria runtime (high-performance AIO subsystem, custom memory management), Linked Data model, containers and stores.
1. [AOP](https://en.wikipedia.org/wiki/Aspect-oriented_programming) and Contracts. The more formal semantics is made explicit, the better for refactoring.
1. Language profiles to enable/disable certail language features: Safe (UB-free + memory protection) language subset (by default) for general-purpose applications development, Full profile for ninjas, AOT-only profile, JIT-requiring profile, etc.
1. Metaprogramming-aware refactoring tools. Code is alive while it can continously evolve.
1. Modules.
1. Integrated package manager.
1. Clang parser integration for interoperability with C++.
1. Versioned (Git-like) Memoria store (in-memory, on-disk) as a physical program structure (instead of a bunch of a plain text files). Code and embedded data are in the same place, reachable with transpiler and refactoring tools.
1. IDE-friendly event-driven dataflow-based transpiler architecture.
1. Embedded HTTP server providing native RESTful API for transpiler, refactoring tools, interactive autocompletion, code and data (language server).
1. Basic Web application for code and data navigation and editing, using the tranpiler's REST API.
1. Infrastructure-aware transpiler/refactoring. Want to split your monolith into well-sized services or vice versa? Jenny will do it for you!

## Highlights

Jenny, as a programming language, is focused on data strucure design and code-as-data metaprogramming. Though every program can be written in a classical textual form, physical Jenny program structure is a versioned multimodel database of parsed abstract syntax trees for Jenny and embedded DSLs, together with associated embedded data structures (annotation metadata, i18n databases etc). The database is dynamically updatable and optimized for analythics, with [MVCC](https://en.wikipedia.org/wiki/Multiversion_concurrency_control) and branching semantics. Structured data representation makes code analytics much simpler and faster. More on this later.

Jenny is not a compiler, its a source-to-source transpiler producing C++ code as an output (together with other artifacts like Protobuf interfaces and SWIG bindings), either for direct compilation into an executable or a C++ library module to use with other C++ applications. Jenny is not a competition or replacement for C++, but a *legacy-free* modernization for better productivity. The language will be co-evolving with C++, stacking on top of its semantics and a huge set of libraries. Codebase matters and C++ has it. 

The transpiler will be developing using service-oriented cloud-friendly asynchronous data-flow model, with public API and interactive Web interfaces. Classical file-in/file-out command-line mode will also be provided for integration with existing build tools. Currently, Memoria provides only in-memory and on-disk (single-machine) storage options, but this is more than enough for typical use case of such transpiler. Interested integrators can implement cloud-native storage option for Memoria for themselves and reimplement the transpiler at the scale of the Cloud.

## Using Memoria for Code Model

Memoria is a C++ metaprogramming framework for general-purpose copy-on-write based [persistent data structures](https://en.wikipedia.org/wiki/Persistent_data_structure) on top of key-value memory model. There are two basic complex data "formats":
* B-Tree-based dynamic versioned data *containers* and
* Pointer-based LinkedData *documents* allocated compactly in arenas with predictable binary data layout.

Containers are versioned and may have arbitrary size. Documents have value semantics and can be stores as data values in containers. They may also have arbitrary binary data size, but optimized to be small. LinkedData documents are similar to JSON, but unlike the latter, the former support much more data types natively, besides strings, numbers, maps and arrays. LinkedData documents are immidiately quaryable, no data type conversion is necessary for processing. They are nearly ideal storage format for parsed abstract syntax trees.

Vesioning in Memoria is similar to (D)VCS. Containers can be updated, and updates are grouped to snapshots. Once a snapshot is committed, it becames immutable. All futher updates will require creating a new version. Different versions can be merged by moving updates from one version to another. The main difference from Git and other DVCS of this kind is that *all versions are matherialized and available for reading simultaneously*. No "checkouting" is necessary. This allows enabling cross-version source code analysis techniques. Because of [snapshot isolation](https://en.wikipedia.org/wiki/Snapshot_isolation) code analysiers can be run as long as they need, incoming incremental updates do not affect the code thay are curently operating with. Moreover, writers do not affect readers in any way. Once snapshot reference is obtained from the version history, all further data access is mostly lockless (modulo short-term locks in cache and the OS kernel). 


