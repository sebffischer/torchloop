#pragma once
#include <torch.h>

namespace lltm {

class optim_sgd {
public:
  std::shared_ptr<void> ptr;
  optim_sgd (void* x);
  optim_sgd (std::shared_ptr<void> x) : ptr(x) {}
  optim_sgd (SEXP x);
  operator SEXP () const;
  void* get ();
};

class jit_module {
public:
  std::shared_ptr<void> ptr;
  // constructor from a void* pointer;
  jit_module (void* x);
  // constructor from a shared_ptr<void> pointer;
  jit_module (std::shared_ptr<void> x) : ptr(x) {}
  // constructor from an R object;
  jit_module (SEXP x);
  // implicit casting operator
  operator SEXP () const;
  // conversion to a void* pointer;
  void* get ();
};
}
