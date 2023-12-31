# Greatest Library Documentation

## Introduction

Welcome to the Greatest library! This C++ library provides a simple and efficient way to find the greatest values in a collection of integers, floats, or strings.

## Getting Started

### Downloading the Library

To get started, download the following files:

- `greatest.hpp`: [link_to_greatest_hpp]([link_to_greatest_hpp])

- `libgreatest.a`: [link_to_libgreatest_a](https://github.com/gundeeps247/goa/blob/main/libgreatest.a) (for Linux and macOS)

- `libgreatest.lib`: [link_to_libgreatest_lib](https://github.com/gundeeps247/goa/blob/main/libgreatest.lib) (for Windows)

### Installation

Place the downloaded files in your project directory or a directory accessible to your compiler. For simplicity, you can keep them in the same folder as your source code.

## Usage

### 1. Including the Library

To use the library, include the header file in your C++ project:

```cpp

#include "greatest.hpp"

```

### 2. Finding the Greatest Values

The library provides a versatile `findGreatestValues` function to find the greatest values in various collections:

- Finding the Greatest Integer:

```cpp

std::vector<int> myIntegers = { /* your integers here */ };

int greatestInteger = findGreatestValues(myIntegers);

```

- Finding the Greatest Float:

```cpp

std::vector<float> myFloats = { /* your floats here */ };

float greatestFloat = findGreatestValues(myFloats);

```

- Finding the Greatest String Length:

```cpp

std::vector<std::string> myWords = { /* your strings here */ };

int greatestStringLength = findGreatestValues(myWords);

```

## Example

Here's a complete example demonstrating the library's usage:

```cpp

#include <iostream>

#include <vector>

#include <string>

#include "greatest.hpp"

int main() {

  // Example vectors

  std::vector<int> myIntegers = {5, 2, 8, 1, 8, 3};

  std::vector<float> myFloats = {3.14, 2.71, 1.61, 9.87, 5.43};

  std::vector<std::string> myWords = {"hello", "world", "programming", "is", "fun"};

  // Find greatest values

  int greatestInteger = findGreatestValues(myIntegers);

  float greatestFloat = findGreatestValues(myFloats);

  int greatestStringLength = findGreatestValues(myWords);

  // Output results

  std::cout << "Greatest integer: " << greatestInteger << std::endl;

  std::cout << "Greatest float: " << greatestFloat << std::endl;

  std::cout << "Greatest string length: " << greatestStringLength << std::endl;

  return 0;

}

```

## Compilation

### Linux and macOS

Compile your code using the following command:

```bash

g++ -o your_program_name your_source_code.cpp -L/replace/with/actual/path -lgreatest

```

Replace `/replace/with/actual/path` with the actual path to the `libgreatest.a` file.

### Windows (MinGW)

Use the following command for compilation on Windows:

```bash

g++ -o your_program_name.exe your_source_code.cpp -L/replace/with/actual/path -lgreatest

```

Replace `/replace/with/actual/path` with the path to the `libgreatest.lib` file.

## Conclusion

The Greatest library empowers you to effortlessly find the greatest values in your C++ projects. Explore its capabilities and customize it to fit your specific needs!
