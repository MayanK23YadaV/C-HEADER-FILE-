# StringToolkit & Nocturnal C Libraries

A pair of simple, reusable C “libraries” for string and numeric utilities, plus a demo program showing how to use them.

## Overview
This repository provides two header‑based C libraries and a demo:
- **String Toolkit** (`stringtoolkit.h`): common string operations (case conversion, vowel counting, reversal, sorting, word‑order reversal).  
- **Nocturnal** (`nocturnal.h` + `something.c`): numeric checks (palindrome, Armstrong, spy‑number).  
- **Demo** (`main.c`): example program that links both libraries and prints results.

## Features

### String Toolkit
- `to_uppercase(char[])` / `to_lowercase(char[])` – convert all letters in a C‑string to upper or lower case  
- `count_vowels(const char[])` – count vowels (A, E, I, O, U) in a string  
- `reverse_string(char[])` – reverse characters in place  
- `sort_strings(char arr[][100], int n)` – alphabetically sort an array of strings  
- `reverse_words(char[])` – reverse the order of words in a sentence  

### Nocturnal Numeric Utilities
- `is_palindrome(int n)` – returns true if a number reads the same forward and backward  
- `is_armstrong(int n)` – returns true if the sum of each digitⁿ equals the original (n = digit count)  
- `is_spy_number(int n)` – returns true if the sum of digits equals the product of digits  

## Repository Structure
├── main.c # Demo program using both libraries
├── stringtoolkit.h # Header‑only string utilities
├── nocturnal.h # Numeric utilities API
└── something.c # Implementation of nocturnal.h

## Requirements
- A C compiler supporting C99 or later (e.g. `gcc`)  
- Standard C library headers: `<ctype.h>`, `<string.h>`, `<stdlib.h>`  


