library(torch)

n = jit_trace(nn_linear(1, 1), torch_randn(1))

lltm:::rcpp_lltm_forward(attr(n$forward, "method"), torch_randn(1))
