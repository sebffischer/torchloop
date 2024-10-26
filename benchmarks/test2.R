library(lltm)
library(torch)
lltm:::rcpp_lltm_run_script_module(torch_randn(1), torch_randn(2))
