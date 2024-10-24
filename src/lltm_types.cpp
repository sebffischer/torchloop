#include <Rcpp.h>
#include "lltm_types.h"
#include "exports.h"

namespace lltm {

void* optim_sgd::get() {
  return ptr.get();
}

optim_sgd::operator SEXP () const {
  auto xptr = make_xptr<optim_sgd>(*this);
  xptr.attr("class") = Rcpp::CharacterVector::create("lltm_optim_sgd");
  return xptr;
}

optim_sgd::optim_sgd (SEXP x) : optim_sgd{Rcpp::as<Rcpp::XPtr<optim_sgd>>(x)->ptr} {}

optim_sgd::optim_sgd (void* x) : ptr(x, rcpp_delete_optim_sgd) {};


void* jit_module::get() {
  return ptr.get();
}

jit_module::operator SEXP () const {
  auto xptr = make_xptr<jit_module>(*this);
  xptr.attr("class") = Rcpp::CharacterVector::create("lltm_jit_module");
  return xptr;
}

jit_module::jit_module (SEXP x) : jit_module{Rcpp::as<Rcpp::XPtr<jit_module>>(x)->ptr} {}

jit_module::jit_module (void* x) : ptr(x, rcpp_delete_jit_module2) {};
}
