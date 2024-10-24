// Generated by using torchexport::export() -> do not edit by hand
#pragma once

#ifdef _WIN32
#ifndef LLTM_HEADERS_ONLY
#define LLTM_API extern "C" __declspec(dllexport)
#else
#define LLTM_API extern "C" __declspec(dllimport)
#endif
#else
#define LLTM_API extern "C"
#endif

#ifndef LLTM_HANDLE_EXCEPTION
#define LLTM_HANDLE_EXCEPTION                                  \
catch(const std::exception& ex) {                                  \
  p_lltm_last_error = make_raw::string(ex.what());             \
} catch (std::string& ex) {                                        \
  p_lltm_last_error = make_raw::string(ex);                    \
} catch (...) {                                                    \
  p_lltm_last_error = make_raw::string("Unknown error. ");     \
}
#endif

void host_exception_handler ();
extern void* p_lltm_last_error;
LLTM_API void* lltm_last_error ();
LLTM_API void lltm_last_error_clear();

LLTM_API void* _lltm_sgd (void* params, double lr, double momentum, double dampening, double weight_decay, bool nesterov);
LLTM_API void* _lltm_run_script_module (void* fn, void* stack);
LLTM_API void* _lltm_forward (void* input, void* weights, void* bias, void* old_h, void* old_cell);
LLTM_API void* _lltm_backward (void* grad_h, void* grad_cell, void* new_cell, void* input_gate, void* output_gate, void* candidate_cell, void* X, void* gate_weights, void* weights);
LLTM_API void _delete_optim_sgd (void* x);
LLTM_API void _delete_graph_function (void* x);
LLTM_API void _delete_stack2 (void* x);

#ifdef RCPP_VERSION
inline void* lltm_sgd (void* params, double lr, double momentum, double dampening, double weight_decay, bool nesterov) {
  auto ret =  _lltm_sgd(params, lr, momentum, dampening, weight_decay, nesterov);
  host_exception_handler();
  return ret;
}
inline void* lltm_run_script_module (void* fn, void* stack) {
  auto ret =  _lltm_run_script_module(fn, stack);
  host_exception_handler();
  return ret;
}
inline void* lltm_forward (void* input, void* weights, void* bias, void* old_h, void* old_cell) {
  auto ret =  _lltm_forward(input, weights, bias, old_h, old_cell);
  host_exception_handler();
  return ret;
}
inline void* lltm_backward (void* grad_h, void* grad_cell, void* new_cell, void* input_gate, void* output_gate, void* candidate_cell, void* X, void* gate_weights, void* weights) {
  auto ret =  _lltm_backward(grad_h, grad_cell, new_cell, input_gate, output_gate, candidate_cell, X, gate_weights, weights);
  host_exception_handler();
  return ret;
}
inline void delete_optim_sgd (void* x) {
   _delete_optim_sgd(x);
  host_exception_handler();
  
}
inline void delete_graph_function (void* x) {
   _delete_graph_function(x);
  host_exception_handler();
  
}
inline void delete_stack2 (void* x) {
   _delete_stack2(x);
  host_exception_handler();
  
}
#endif // RCPP_VERSION
