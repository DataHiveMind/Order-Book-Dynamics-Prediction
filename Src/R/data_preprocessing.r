# Load required library
library(tidyverse)

# Function to preprocess raw data
preprocess_data <- function(filepath) {
    # Load raw data
    raw_data <- read.csv(filepath)
    
    # Remove missing values
    raw_data <- raw_data %>% drop_na()
    
    # Convert 'trade_type' to numerical (1 for buy, -1 for sell)
    raw_data$trade_type <- ifelse(raw_data$trade_type == "buy", 1, -1)
    
    # Normalize numerical columns
    columns_to_normalize <- c("price", "volume", "bid_price", "ask_price", "spread", "mid_price")
    raw_data[columns_to_normalize] <- lapply(raw_data[columns_to_normalize], function(x) {
        (x - min(x)) / (max(x) - min(x))
    })
    
    # Return processed data
    return(raw_data)
}

# Example usage
processed_data <- preprocess_data("data/raw/raw_data.csv")
write.csv(processed_data, "data/processed/data.csv", row.names = FALSE)
