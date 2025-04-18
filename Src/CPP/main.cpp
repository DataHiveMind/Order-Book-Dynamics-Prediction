#include <iostream>
#include "libs/utils.hpp"
#include "data_processing.cpp"

int main() {
    std::cout << "High-Frequency Trading Analysis with C++" << std::endl;
    
    // Example: Load and process data
    std::vector<std::vector<float>> data = load_data("data/processed/data.csv");
    std::cout << "Data loaded successfully!" << std::endl;
    
    // Example: Calculate moving average
    std::vector<float> prices = extract_column(data, 0);
    std::vector<float> moving_avg = calculate_moving_average(prices, 10);
    std::cout << "Moving average calculated!" << std::endl;

    return 0;
}
