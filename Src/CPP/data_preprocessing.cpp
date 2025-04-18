#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

struct DataRow {
    float price;
    float volume;
    float bid_price;
    float ask_price;
    float spread;
    int trade_type; // 1 for buy, -1 for sell
    float mid_price;
    std::string volatility_indicator;
};

// Function to normalize a vector of data
void normalize(std::vector<float> &data) {
    float min_val = *std::min_element(data.begin(), data.end());
    float max_val = *std::max_element(data.begin(), data.end());
    for (auto &val : data) {
        val = (val - min_val) / (max_val - min_val);
    }
}

// Function to process raw data
std::vector<DataRow> load_data(const std::string &filepath) {
    std::ifstream file(filepath);
    std::string line;
    std::vector<DataRow> dataset;

    // Skip header
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        DataRow row;
        std::string value;

        // Parse each column
        std::getline(ss, value, ','); // timestamp
        std::getline(ss, value, ','); row.price = std::stof(value);
        std::getline(ss, value, ','); row.volume = std::stof(value);
        std::getline(ss, value, ','); row.bid_price = std::stof(value);
        std::getline(ss, value, ','); row.ask_price = std::stof(value);
        std::getline(ss, value, ','); row.spread = std::stof(value);
        std::getline(ss, value, ','); row.trade_type = (value == "buy") ? 1 : -1;
        std::getline(ss, value, ','); row.mid_price = std::stof(value);
        std::getline(ss, value, ','); row.volatility_indicator = value;

        dataset.push_back(row);
    }

    // Normalize numerical columns
    std::vector<float> prices, volumes, bid_prices, ask_prices, spreads, mid_prices;
    for (const auto &row : dataset) {
        prices.push_back(row.price);
        volumes.push_back(row.volume);
        bid_prices.push_back(row.bid_price);
        ask_prices.push_back(row.ask_price);
        spreads.push_back(row.spread);
        mid_prices.push_back(row.mid_price);
    }

    normalize(prices);
    normalize(volumes);
    normalize(bid_prices);
    normalize(ask_prices);
    normalize(spreads);
    normalize(mid_prices);

    for (size_t i = 0; i < dataset.size(); ++i) {
        dataset[i].price = prices[i];
        dataset[i].volume = volumes[i];
        dataset[i].bid_price = bid_prices[i];
        dataset[i].ask_price = ask_prices[i];
        dataset[i].spread = spreads[i];
        dataset[i].mid_price = mid_prices[i];
    }

    return dataset;
}
