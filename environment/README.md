# Environment Directory

This folder contains files to set up the project environment:
- `requirements.txt`: Lists Python dependencies for pip installations.
- `environment.yml`: Conda environment configuration file.
- `setup_r.R`: Installs required R packages.
- `README.md`: Documentation for environment setup.

### Quick Setup Guide

1. **Python Environment**:
   - Using pip: `pip install -r environment/requirements.txt`
   - Using Conda: `conda env create -f environment/environment.yml`

2. **R Environment**:
   - Run the setup script: `Rscript environment/setup_r.R`

3. **System Dependencies**:
   - Install GCC (if required for C++): `sudo apt-get install gcc` (Linux) or use a similar installer for other OS.
