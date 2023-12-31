# Greatest Number Finder - C++ Header

## Introduction

This C++ header file provides a function to find the greatest number in a given list of integers.

## Usage

1. Download the [greatest.h](https://github.com/gundeeps247/goa/blob/main/greatest.h) header file.

2. Place the header file in your project directory.

```cpp

// main.cpp

#include  <iostream>

#include  "greatest.h"

int main() {

    // Get three numbers from the user

    std::cout << "Enter three numbers: ";

    int num1, num2, num3;

    std::cin >> num1 >> num2 >> num3;

    // Find the greatest number using the function from the header

    int greatest = findGreatest(num1, num2, num3);

    // Display the result

    std::cout << "The greatest number is: " << greatest << std::endl;

    return 0;

}

```

3. run or put in the command
```g++ main.cpp -o myprogram```


### Notes

- Ensure your compiler supports C++11 or later.

- Include necessary header files (`#include <iostream>` and `#include <vector>`).

## Download

[Download greatest.h](link-to-your-downloadable-file)

## License

This library is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.