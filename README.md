# Greatest Number Finder - C++ Header

## Introduction

This C++ header file provides a function to find the greatest number in a given list of integers.

## Usage

1\. Download the [greatest.h](https://github.com/gundeeps247/goa/blob/main/greatest.h) header file.

2\. Place the header file in your project directory.

```cpp

#include <iostream>

#include <vector>

#include "greatest.h"

int main() {

    // Example usage:

    std::vector<int> numbers = {4, 8, 2, 10, 5};

    int result = findGreatest(numbers);

    std::cout << "The greatest number is: " << result << std::endl;

    return 0;

}

```

### Notes

- Ensure your compiler supports C++11 or later.

- Include necessary header files (`#include <iostream>` and `#include <vector>`).

## Download

[Download greatest.h](link-to-your-downloadable-file)

## License

This library is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
