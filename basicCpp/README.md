# Day 1 — Basic C++ Programs

This folder contains introductory C++ programs covering fundamental concepts like I/O, arithmetic, conditionals, and string handling.

## Programs

| File | Description |
|------|-------------|
| [hello.cpp](hello.cpp) | Prints "Hello, World!" — the classic first program |
| [add.cpp](add.cpp) | Takes two integers as input and prints their sum |
| [SimpleInterest.cpp](SimpleInterest.cpp) | Calculates Simple Interest given Principal, Rate, and Time |
| [max3.cpp](max3.cpp) | Finds the largest among three numbers using `typedef` and conditionals |
| [roots_quadratic.cpp](roots_quadratic.cpp) | Computes real roots of a quadratic equation using the quadratic formula |
| [triangleArea.cpp](triangleArea.cpp) | Calculates the area of a right-angle triangle from base and height |
| [n_natural_sum.cpp](n_natural_sum.cpp) | Computes the sum of first N natural numbers using the formula N*(N+1)/2 |
| [name.cpp](name.cpp) | Greets the user by name (single word input via `cin`) |
| [full_name.cpp](full_name.cpp) | Greets the user by full name (multi-word input via `getline`) |

## Concepts Covered

- `#include` headers (`iostream`, `cmath`)
- `using namespace std`
- Basic I/O with `cin` and `cout`
- `getline()` for reading full-line string input
- Arithmetic operators and expressions
- `typedef` for type aliasing
- `if-else` conditional statements
- Mathematical functions: `sqrt()`

## How to Compile & Run

```bash
# Compile any file
g++ filename.cpp -o output

# Run
./output
```

Or use the provided CMake build:

```bash
cd build
cmake ..
make
```
