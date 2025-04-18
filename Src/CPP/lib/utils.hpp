#ifndef UTILS_HPP
#define UTILS_HPP

#include <vector>

std::vector<float> calculate_moving_average(const std::vector<float> &prices, int window_size);
std::vector<float> extract_column(const std::vector<std::vector<float>> &data, int column_index);

#endif
