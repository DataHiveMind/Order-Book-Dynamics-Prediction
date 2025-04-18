test_that("visualizations are created without errors", {
    data <- data.frame(time = c(1, 2, 3), price = c(10, 20, 30))
    plot <- ggplot(data, aes(x = time, y = price)) + geom_line()
    expect_s3_class(plot, "ggplot")
})
