# Day 2 — Bitwise Operations

This folder contains C++ programs demonstrating the fundamental bitwise operators.

## Programs

| File | Operator | Description |
|------|----------|-------------|
| [and.cpp](and.cpp) | `&` | Bitwise AND — sets a bit only if both operands have that bit set |
| [or.cpp](or.cpp) | `\|` | Bitwise OR — sets a bit if at least one operand has that bit set |
| [xor.cpp](xor.cpp) | `^` | Bitwise XOR — sets a bit only if exactly one operand has that bit set |

## Bit-level Walkthrough (AND example)

```
  7  →  0 0 0 0 0 1 1 1
  2  →  0 0 0 0 0 0 1 0
  &  →  0 0 0 0 0 0 1 0  =  2
```

```
  7  →  0 0 0 0 0 1 1 1
  2  →  0 0 0 0 0 0 1 0
  |  →  0 0 0 0 0 1 1 1  =  7
```

```
  7  →  0 0 0 0 0 1 1 1
  2  →  0 0 0 0 0 0 1 0
  ^  →  0 0 0 0 0 1 0 1  =  5
```

## Concepts Covered

- Bitwise AND (`&`)
- Bitwise OR (`|`)
- Bitwise XOR (`^`)
- Binary representation of integers

## How to Compile & Run

```bash
g++ and.cpp -o and_op && ./and_op
g++ or.cpp  -o or_op  && ./or_op
g++ xor.cpp -o xor_op && ./xor_op
```
