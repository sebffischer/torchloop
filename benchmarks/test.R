library(torch)
library(lltm)

n = nn_linear(1, 1)
input = torch_randn(1)
target = torch_randn(1)

nf = jit_trace(nn_linear(1, 1), input)
loss_fn = jit_trace(nnf_mse_loss, input, input)

loss = lltm:::rcpp_lltm_run_script_module(
  # this is the correct external pointer
  network = mlr3misc::get_private(attr(nf, "module"))$ptr,
  loss_fn = loss_fn$ptr,
  input   = input,
  target  = target
)

