#!/bin/bash

# Activate Python environment
echo "Activating Python environment..."
source ~/venvs/hft_env/bin/activate

# Define data and output paths
PROCESSED_DATA="data/processed/data.csv"
MODEL_DIR="models/"
LOGS_DIR="results/logs/"
mkdir -p $MODEL_DIR $LOGS_DIR

echo "Starting training pipeline..."
python src/python/main.py > $LOGS_DIR/training_log.txt

echo "Training pipeline completed! Logs saved at $LOGS_DIR/training_log.txt"
