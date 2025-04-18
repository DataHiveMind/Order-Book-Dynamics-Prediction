# Load necessary libraries
library(tidyverse)

# Function to calculate moving average
calculate_moving_average <- function(prices, window_size) {
  return(filter(prices, rep(1/window_size, window_size), sides = 2))
}

# Load processed data
data <- read.csv("data/processed/data.csv")

# Example: Perform regression analysis
model <- lm(price ~ volume + time_of_day, data = data)
summary(model)

# Save analysis output
write.csv(summary(model)$coefficients, "results/regression_coefficients.csv")
