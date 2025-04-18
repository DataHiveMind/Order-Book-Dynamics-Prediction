test_that("regression model coefficients are calculated correctly", {
    data <- data.frame(price = c(1, 2, 3), volume = c(2, 4, 6), time_of_day = c(1, 1, 1))
    model <- lm(price ~ volume + time_of_day, data = data)
    coefficients <- coef(model)
    expect_equal(length(coefficients), 3)
})
