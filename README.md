# C++ Bootcamp

The bootcamp introduces fundamental and advanced C++ concepts step-by-step, with a focus on:
- Object-Oriented Programming (OOP)
- Memory management
- Canonical class design
- Inheritance and Polymorphism

> All code adheres to the C++17 standard using the flags `-Wall -Wextra -Werror -std=c++17`.

---

## Modules Overview

### CPP Module 00: Basics of C++

> Namespaces, classes, initialization, static/const, and I/O streams

| Exercise | Topics Covered                                     |
|----------|----------------------------------------------------|
| ex00     | `std::string`, loops, I/O                          |
| ex01     | Class design, array, field truncation, CLI parsing |
| ex02     | Rebuild logic using a header and log file          |

---

### CPP Module 01: Memory, References, and Switch

> Dynamic allocation, references vs pointers, string ops, switch-case

| Exercise | Topics Covered                                      |
|----------|-----------------------------------------------------|
| ex00     | Stack vs heap, object creation                      |
| ex01     | Array of heap-allocated objects                     |
| ex02     | Pointer vs reference, memory addresses              |
| ex03     | Object ownership, reference vs pointer members      |
| ex04     | File I/O, manual string replace (no `.replace()`)   |
| ex05     | Member function pointers, log filtering             |

---

### CPP Module 02: Operator Overloading & OCF

> Fixed-point math, overloading, Canonical Form, arithmetic ops

| Exercise | Topics Covered                                         |
|----------|--------------------------------------------------------|
| ex00     | Canonical Form, raw bits storage                       |
| ex01     | Fixed-point to `float`, `int`, stream overload         |
| ex02     | Comparison, arithmetic, increment, min/max overloads   |

---

### CPP Module 03: Inheritance

> Inheritance chains, constructors, destructors, diamond problem

| Exercise | Topics Covered                                            |
|----------|-----------------------------------------------------------|
| ex00     | First class: `ClapTrap` with combat behavior              |
| ex01     | Derived class: `ScavTrap` and member reuse                |
| ex02     | Further inheritance: `FragTrap`, unique methods           |

---

### CPP Module 04: Polymorphism & Abstract Classes

> Runtime polymorphism, virtual destructors, interfaces

| Exercise | Topics Covered                                        |
|----------|-------------------------------------------------------|
| ex00     | Virtual functions, `Animal` → `Dog`, `Cat`            |
| ex01     | `Brain`, deep copy, dynamic memory                    |
| ex02     | Making `Animal` abstract, enforcing contract          |

---

##  Rules & Restrictions

- Use standard C++17
- No C-style functions (`printf`, `malloc`, `free`, etc.)
- No `friend`, no `using namespace`
- No implementation in headers (except templates)

---

## Key Concepts Practiced

- Orthodox Canonical Form (OCF)
- Member function pointers
- Abstract and interface-based design
- Fixed-point math representation
- Dynamic allocation and memory safety
- Object slicing and deep copies
- Runtime vs compile-time polymorphism

---

## Build & Run

Each exercise includes a `Makefile`. To compile and run:

```bash
cd exXX
make
./programName
