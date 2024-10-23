#pragma once
#include <torch.h>

namespace torchsparse {

class optim_sgd {
public:
  // this is the slot to hold the void*
  std::shared_ptr<void> ptr;
  // the constructor from a void*
  optim_sgd (void* x);
  // casting operator Rcpp->SEXP
  operator SEXP () const;
  // returns the void* from the type.
  void* get ();
};

}
