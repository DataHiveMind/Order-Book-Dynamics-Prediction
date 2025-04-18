# Define required packages
required_packages <- c("tidyverse", "ggplot2", "testthat")

# Install missing packages
install_if_missing <- function(packages) {
  for (package in packages) {
    if (!require(package, character.only = TRUE)) {
      install.packages(package)
    }
  }
}

install_if_missing(required_packages)
