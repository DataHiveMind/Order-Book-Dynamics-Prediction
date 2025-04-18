#include "../data_preprocessing.cpp"
#include <gtest/gtest.h>

TEST(DataProcessingTest, LoadData) {
    std::vector<std::vector<float>> data = load_data("data/processed/data.csv");
    EXPECT_GT(data.size(), 0);
}
