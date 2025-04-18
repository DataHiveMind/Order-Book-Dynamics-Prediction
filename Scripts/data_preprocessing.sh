#!/bin/bash

# Define file paths
RAW_DATA="data/raw/raw_data.csv"
PROCESSED_DATA="data/processed/data.csv"

# Ensure required directories exist
mkdir -p data/processed

echo "Preprocessing data..."
# Example: Remove invalid rows and save processed data
awk -F, '{if ($1 != "" && $2 != "" && $3 != "") print $0}' $RAW_DATA > $PROCESSED_DATA

echo "Data preprocessing completed! Processed data saved at $PROCESSED_DATA"
