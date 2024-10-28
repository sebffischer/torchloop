// Generated by using torchexport::export() -> do not edit by hand
#include <Rcpp.h>
#include <torch.h>
#include "lltm_types.h"

lltm::optim_sgd rcpp_lltm_sgd (torch::TensorList params, double lr, double momentum, double dampening, double weight_decay, bool nesterov);
void rcpp_lltm_sgd_step (lltm::optim_sgd opt);
void rcpp_lltm_sgd_zero_grad (lltm::optim_sgd opt);
void* rcpp_lltm_run_script_module (Rcpp::XPtr<XPtrTorchJITModule> network, Rcpp::XPtr<XPtrTorchFunctionPtr> loss_fn, torch::Tensor input, torch::Tensor target);
torch::TensorList rcpp_lltm_forward (torch::Tensor input, torch::Tensor weights, torch::Tensor bias, torch::Tensor old_h, torch::Tensor old_cell);
torch::TensorList rcpp_lltm_backward (torch::Tensor grad_h, torch::Tensor grad_cell, torch::Tensor new_cell, torch::Tensor input_gate, torch::Tensor output_gate, torch::Tensor candidate_cell, torch::Tensor X, torch::Tensor gate_weights, torch::Tensor weights);
void rcpp_delete_optim_sgd (void* x);
void rcpp_delete_graph_function (void* x);
void rcpp_delete_script_module2 (void* x);
void rcpp_delete_stack2 (void* x);
