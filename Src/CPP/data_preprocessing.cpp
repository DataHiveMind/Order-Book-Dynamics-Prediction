#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

std::vector<std::vector<float>> load_data(const std::string &filepath) {
    std::vector<std::vector<float>> data;
    std::ifstream file(filepath);
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string value;
        std::vector<float> row;

        while (std::getline(ss, value, ',')) {
            row.push_back(std::stof(value));
        }
        data.push_back(row);
    }

    return data;
}
