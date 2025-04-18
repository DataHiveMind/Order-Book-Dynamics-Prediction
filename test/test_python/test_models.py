import unittest
from Src.Python.models.LSTM_model import build_lstm_model

class TestModels(unittest.TestCase):
    def test_build_lstm_model(self):
        model = build_lstm_model((30, 1))
        self.assertIsNotNone(model)
