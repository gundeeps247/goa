Certainly! Here's an updated version of the documentation to cover Windows, macOS, and Linux:

```markdown
# Greatest Library Documentation

## Introduction

Welcome to the Greatest library! This C++ library provides a simple and efficient way to find the greatest values in a collection of integers, floats, or strings.

## Downloading the Library

To use the Greatest library, you need to download two files:

1. [greatest.hpp](link_to_greatest_hpp)
2. [libgreatest.a](link_to_libgreatest_a) (for Linux and macOS)
3. [libgreatest.lib](link_to_libgreatest_lib) (for Windows)

## Installation

Place the downloaded files in your project directory or a directory where your compiler can find them. For simplicity, you can keep them in the same folder as your source code.

## Usage

### 1. Include the Library

Include the "greatest.hpp" header file in your C++ project:

```cpp
#include "greatest.hpp"
```

### 2. Finding the Greatest Integer

To find the greatest integer in a vector of integers, use the `findGreatestValues` function with the appropriate template type:

```cpp
std::vector<int> myIntegers = { /* your integers here */ };
int greatestInteger = findGreatestValues(myIntegers);
```

### 3. Finding the Greatest Float

To find the greatest float in a vector of floats, use the same function with the appropriate template type:

```cpp
std::vector<float> myFloats = { /* your floats here */ };
float greatestFloat = findGreatestValues(myFloats);
```

### 4. Finding the Greatest String Length

To find the greatest string length in a vector of strings, again, use the function with the appropriate template specialization for strings:

```cpp
std::vector<std::string> myWords = { /* your strings here */ };
int greatestStringLength = findGreatestValues(myWords);
```

## Example

Here's a simple example demonstrating the usage of the Greatest library:

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

To compile your code using the Greatest library, use the following command:

```bash
g++ -o your_program_name your_source_code.cpp -L/replace/with/actual/path -lgreatest
```

Replace `/replace/with/actual/path` with the actual path to the directory where `libgreatest.a` is located. Make sure to adjust the other placeholders as well.

### Windows

To compile your code on Windows using MinGW, use the following command:

```bash
g++ -o your_program_name.exe your_source_code.cpp -L/replace/with/actual/path -lgreatest
```

Replace `/replace/with/actual/path` with the actual path to the directory where `libgreatest.lib` is located. Make sure to adjust the other placeholders as well.

## Conclusion

The Greatest library makes it easy to find the greatest values in vectors of integers, floats, or strings. Feel free to explore and customize the library according to your needs!

---

Feel free to replace the placeholder links and paths with the actual download links and paths for your files.