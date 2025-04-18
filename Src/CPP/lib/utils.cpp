#include "utils.hpp"

std::vector<float> calculate_moving_average(const std::vector<float> &prices, int window_size) {
    std::vector<float> moving_average;

    for (size_t i = 0; i < prices.size() - window_size + 1; ++i) {
        float sum = 0.0;
        for (size_t j = i; j < i + window_size; ++j) {
            sum += prices[j];
        }
        moving_average.push_back(sum / window_size);
    }

    return moving_average;
}

std::vector<float> extract_column(const std::vector<std::vector<float>> &data, int column_index) {
    std::vector<float> column;

    for (const auto &row : data) {
        if (column_index < row.size()) {
            column.push_back(row[column_index]);
        }
    }

    return column;
}
