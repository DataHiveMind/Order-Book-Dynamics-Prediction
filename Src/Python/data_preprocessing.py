import pandas as pd
import numpy as np

def load_data(filepath):
    data = pd.read_csv(filepath)
    X = np.array(data.iloc[:, :-1])
    y = np.array(data.iloc[:, -1])
    
    # Normalize data
    X = (X - X.mean()) / X.std()
    return {'X_train': X[:int(0.8*len(X))],
            'X_test': X[int(0.8*len(X)):],
            'y_train': y[:int(0.8*len(y))],
            'y_test': y[int(0.8*len(y))]}
