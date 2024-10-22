# Introduction to Computer Organization

This repository contains various labs and assignments for the Introduction to Computer Organization course. Each lab focuses on different aspects of computer systems, including data manipulation, code injection, and parallel processing.


## Projects Overview

| Project Name         | Description                                                                 | Tech Stack       |
|----------------------|-----------------------------------------------------------------------------|------------------|
| Parallel-lab         | optimization and parallelization through image manipulation tasks, including mean pixel value calculation, grayscale conversion, and image blurring                              | C++, OpenMP             |
| 000 - working        | my grader script to evaluate the correctness from my brute force solution       | C++              |
| attack-lab           | Exploit Buffer Overflow attack             | Assembly      |
| Bomb-lab             | debugging and reverse engineering to defuse a binary bomb       | Assembly, gdb      |
| datalab-handout      | bit-level manipulation and arithmetic operations.                  | C                |
| template_tester      | Contains template files and scripts for testing and validation purposes.    | Various          |


### 000 - Working
This directory contains miscellaneous working files and code snippets used for various tasks and experiments.

- **Files:**
  - `code-evaluator.cpp`
  - `lab0_BruteF.cpp`
  - `lab0.cpp`

### Attack Lab
The Attack Lab teaches students about security vulnerabilities and how to exploit them. It includes tasks such as code injection and return-oriented programming.

- **Files:**
  - `target12/`
    - `ctarget`
    - `rtarget`
    - `cookie.txt`
    - `farm.c`
    - `hex2raw`
  - **Tech Stack:** C, Assembly

### Bomb Lab
The Bomb Lab is designed to teach students about debugging and reverse engineering. Students must defuse a binary bomb by understanding its assembly code and logic.

- **Files:**
  - `bomb36/`
    - `ascii.c`
    - `string.c`
  - **Tech Stack:** C, Assembly

### Data Lab
The Data Lab focuses on bit-level manipulation and arithmetic operations. Students implement functions to solve various bitwise puzzles.

- **Files:**
  - `bits.c`
  - `bits.h`
  - `btest.c`
  - `btest.h`
  - `dd.c`
  - `decl.c`
  - `ishow.c`
  - `README`
  - `tests.c`
  - **Tech Stack:** C

### Data Lab 0
Similar to the Data Lab, Data Lab 0 is an introductory version that helps students get started with bit-level operations and understanding the basics of data manipulation.

- **Files:**
  - `bits.c`
  - `bits.h`
  - `btest`
  - `btest.c`
  - `btest.h`
  - `decl.c`
  - `dlc`
  - `driver.pl`
  - `Driverhdrs.pm`
  - `Driverlib.pm`
  - `fshow`
  - `fshow.c`
  - `ishow`
  - `ishow.c`
  - `Makefile`
  - `README`
  - `tests.c`
  - **Tech Stack:** C, Perl

### Parallel Lab
The Parallel Lab focuses on parallel programming and concurrency. Students learn to write multi-threaded programs and handle synchronization issues.

- **Files:**
  - `README.md`
  - **Tech Stack:** C++

### Template Tester
This directory contains template files and scripts used for testing and validation purposes.

- **Files:**
  - Various template files and scripts
  - **Tech Stack:** Various

## How to Build and Run

### Data Lab and Data Lab 0
1. Navigate to the respective directory.
2. Run `make btest` to build the test harness.
3. Execute `./btest` to run the tests.

### Bomb Lab
1. Use `gdb` to debug the bomb executable.
2. Use `objdump` and `strings` to analyze the binary.

### Attack Lab
1. Use `hex2raw` to generate byte sequences.
2. Use `gdb` to debug and analyze the target binaries.

### Parallel Lab
1. Compile the C++ files using `g++`.
2. Run the executable to observe the behavior of multi-threaded programs.

## License
All materials are provided for educational purposes and are subject to the course's academic integrity policies.
