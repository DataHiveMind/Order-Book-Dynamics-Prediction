# Tests Directory

This folder contains unit tests for Python, R, and C++ code:
- `test_python/`: Unit tests for Python code, using `unittest`.
- `test_r/`: Unit tests for R scripts, using `testthat`.
- `test_cpp/`: Unit tests for C++ code, using Google Test (`gtest`).

Run tests:
- Python: `python -m unittest discover test_python`
- R: `Rscript -e "testthat::test_dir('test_r')"`
- C++: Compile and run `test_runner` using `CMake`.
