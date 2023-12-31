// greatest.hpp

#ifndef GREATEST_VALUES_HPP
#define GREATEST_VALUES_HPP

#include <vector>
#include <utility>
#include <cstddef>  // Add this line for size_t
#include <string>   // Add this line for std::string

template <typename T>
std::pair<T, std::vector<size_t>> findGreatestValues(const std::vector<T>& numbers, void (*optionalOutputFunction)(const T&, const std::vector<size_t>&));

// Template specialization for strings using length comparison
template <>
std::pair<std::string, std::vector<size_t>> findGreatestValues(const std::vector<std::string>& strings,
                                                               void (*optionalOutputFunction)(const std::string&, const std::vector<size_t>&));

// Example custom output function
template <typename T>
void printWithStars(const T& value, const std::vector<size_t>& indices);

#endif
