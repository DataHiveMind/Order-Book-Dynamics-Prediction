# Load necessary libraries
library(tidyverse)

# Function to normalize data
normalize <- function(data) {
  return((data - min(data)) / (max(data) - min(data)))
}

# Load raw data
raw_data <- read.csv("data/raw/raw_data.csv")

# Preprocess data
processed_data <- raw_data %>%
  mutate(price = normalize(price),
         volume = normalize(volume)) %>%
  filter(!is.na(price))

# Save processed data
write.csv(processed_data, "data/processed/data.csv")
