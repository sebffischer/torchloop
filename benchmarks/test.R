library(torch)
library(lltm)


n = nn_linear(1, 1)
input = torch_randn(1)
nf = jit_trace(nnf_relu, input)
lltm:::rcpp_lltm_run_script_module(nf$ptr)#, torch_randn(1, 1))

optim = optim_sgd(n$parameters, lr = 0.1)

# forward pass loss and optimizer step
optim$zero_grad()
loss = (nf(x = torch_randn(1, 1)) - 1)^2
n$parameters[[1]] |> mean()
loss$backward()
optim$step()
n$parameters[[1]] |> mean()
