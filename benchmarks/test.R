library(torch)

n = nn_linear(1, 1)
input = torch_randn(1)
nf = jit_trace(n, input)
f = attr(nf$forward, "method")
lltm:::rcpp_lltm_run_script_module(f, torch_randn(1, 1))
