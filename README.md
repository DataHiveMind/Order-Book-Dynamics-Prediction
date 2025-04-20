Order Book Dynamics Prediction
Overview
This project explores the predictability of cryptocurrency market dynamics, focusing on Bitcoin.  It employs deep learning techniques, specifically Convolutional Neural Networks (CNNs), to analyze order book data and identify patterns that may indicate future price movements. The primary goal is to develop a model that can be used to inform trading strategies.

Key Features
Predictive Modeling: Utilizes a CNN architecture implemented with FLAX and JAX to learn from order book data.

Cryptocurrency Focus: Analyzes the BTCUSDT market.

Data Handling: Processes historical order book data.

Model Training: Trains the CNN model and evaluates its performance.

Trading Strategy: Implements and evaluates a trading strategy based on the model's predictions.

Technical Details
Deep Learning Framework: FLAX and JAX.

Model Architecture: Convolutional Neural Network (CNN).

Project Structure
The repository contains the following key components:

Code for data downloading and processing.

Implementation of the CNN model.

Scripts for training and evaluating the model.

Code for implementing and evaluating a trading strategy.

Results
The project demonstrates the potential for using deep learning to predict short-term and mid-term price movements in the cryptocurrency market. The model achieves a classification accuracy of 86%.

Potential Applications
The predictive system developed in this project could be integrated into a trading bot for automated trading.

References
Relevant research papers and methodologies are referenced in the original README.md.  Key works include:

DeepLOB: Deep convolutional neural networks for limit order books - Zhang Z, Zohren S, Roberts S.

Deep Order Flow Imbalance: Extracting Alpha at Multiple Horizons from the Limit Order Book - Kolm, Petter N. et al.

THE SHORT-TERM PREDICTABILITY OF RETURNS IN ORDER BOOK MARKETS: A DEEP LEARNING PERSPECTIVE - Lucchese L, S. Pankkanen M, E.D.Veraart A.

Order Flow Imbalance - A High-Frequency Trading Signal - Dean Markwick.

How informative is the Order Book Beyond the Best Levels? Machine Learning Perspective - Tran D, Kanniainen J, Iosifidis A.
