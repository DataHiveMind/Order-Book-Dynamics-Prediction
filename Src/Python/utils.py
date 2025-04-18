import numpy as np

def calculate_moving_average(prices, window_size):
    return np.convolve(prices, np.ones(window_size)/window_size, mode='valid')

def split_data(data, train_ratio=0.8):
    split_idx = int(len(data) * train_ratio)
    return data[:split_idx], data[split_idx:]
