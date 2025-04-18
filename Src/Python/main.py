import utils
from models.LSTM_model import build_lstm_model
from data_preprocessing import load_data

def main():
    print("Starting high-frequency trading analysis...")
    data = load_data("data/processed/data.csv")
    
    model = build_lstm_model()
    print("Model built successfully!")
    
    print("Training model...")
    model.fit(data['X_train'], data['y_train'], epochs=10, batch_size=32)
    print("Training completed!")
    
if __name__ == "__main__":
    main()
