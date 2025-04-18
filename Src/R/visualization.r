# Load necessary libraries
library(ggplot2)

# Load data
data <- read.csv("data/processed/data.csv")

# Plot price over time
ggplot(data, aes(x = time, y = price)) +
  geom_line(color = "blue") +
  labs(title = "Price Movement Over Time", x = "Time", y = "Price")

# Save plot
ggsave("results/figures/price_movement.png")

# Plot volume histogram
ggplot(data, aes(x = volume)) +
  geom_histogram(fill = "green", bins = 30) +
  labs(title = "Volume Distribution", x = "Volume", y = "Frequency")

# Save histogram
ggsave("results/figures/volume_distribution.png")
