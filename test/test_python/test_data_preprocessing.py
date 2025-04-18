import unittest
from Src.Python.data_preprocessing import load_data

class TestDataProcessing(unittest.TestCase):
    def test_load_data(self):
        data = load_data("data/processed/data.csv")
        self.assertIn('X_train', data)
        self.assertIn('y_train', data)
