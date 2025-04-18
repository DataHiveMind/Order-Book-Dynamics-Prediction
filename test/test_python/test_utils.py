import unittest
from Src.Python.utils import calculate_moving_average, split_data

class TestUtils(unittest.TestCase):
    def test_calculate_moving_average(self):
        prices = [1, 2, 3, 4, 5]
        result = calculate_moving_average(prices, 3)
        expected = [2.0, 3.0, 4.0]
        self.assertEqual(result, expected)
    
    def test_split_data(self):
        data = [1, 2, 3, 4, 5]
        train, test = split_data(data, 0.8)
        self.assertEqual(train, [1, 2, 3, 4])
        self.assertEqual(test, [5])
