import pandas as pd
import numpy as np

def load_data(filepath):
    # Load raw data into a DataFrame
    data = pd.read_csv(filepath)
    
    # Drop rows with missing values
    data = data.dropna()

    # Convert categorical column 'trade_type' to numerical (1 for buy, -1 for sell)
    data['trade_type'] = data['trade_type'].apply(lambda x: 1 if x == 'buy' else -1)

    # Normalize numerical columns
    columns_to_normalize = ['price', 'volume', 'bid_price', 'ask_price', 'spread', 'mid_price']
    for column in columns_to_normalize:
        data[column] = (data[column] - data[column].min()) / (data[column].max() - data[column].min())
    
    return {
        'X_train': data.iloc[:, :-1].values,  # Exclude the last column ('volatility_indicator')
        'y_train': data.iloc[:, -1].values   # Use 'volatility_indicator' as target
    }
