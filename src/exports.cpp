// Generated by using torchexport::export() -> do not edit by hand
#include "exports.h"
#define LLTM_HEADERS_ONLY
#include <lltm/lltm.h>

// [[Rcpp::export]]
lltm::optim_sgd rcpp_lltm_sgd (torch::TensorList params, double lr, double momentum, double dampening, double weight_decay, bool nesterov) {
  return  lltm_sgd(params.get(), lr, momentum, dampening, weight_decay, nesterov);
}
// [[Rcpp::export]]
void rcpp_lltm_sgd_step (lltm::optim_sgd opt) {
   lltm_sgd_step(opt.get());
}
// [[Rcpp::export]]
void rcpp_lltm_sgd_zero_grad (lltm::optim_sgd opt) {
   lltm_sgd_zero_grad(opt.get());
}
// [[Rcpp::export]]
torch::Tensor rcpp_lltm_run_script_module (Rcpp::XPtr<XPtrTorchFunctionPtr> network, Rcpp::XPtr<XPtrTorchFunctionPtr> loss_fn, torch::Tensor input, torch::Tensor target) {
  return  lltm_run_script_module(network.get(), loss_fn.get(), input.get(), target.get());
}
// [[Rcpp::export]]
torch::TensorList rcpp_lltm_forward (torch::Tensor input, torch::Tensor weights, torch::Tensor bias, torch::Tensor old_h, torch::Tensor old_cell) {
  return  lltm_forward(input.get(), weights.get(), bias.get(), old_h.get(), old_cell.get());
}
// [[Rcpp::export]]
torch::TensorList rcpp_lltm_backward (torch::Tensor grad_h, torch::Tensor grad_cell, torch::Tensor new_cell, torch::Tensor input_gate, torch::Tensor output_gate, torch::Tensor candidate_cell, torch::Tensor X, torch::Tensor gate_weights, torch::Tensor weights) {
  return  lltm_backward(grad_h.get(), grad_cell.get(), new_cell.get(), input_gate.get(), output_gate.get(), candidate_cell.get(), X.get(), gate_weights.get(), weights.get());
}
// [[Rcpp::export]]
void rcpp_delete_optim_sgd (void* x) {
   delete_optim_sgd(x);
}
// [[Rcpp::export]]
void rcpp_delete_graph_function (void* x) {
   delete_graph_function(x);
}
// [[Rcpp::export]]
void rcpp_delete_stack2 (void* x) {
   delete_stack2(x);
}
