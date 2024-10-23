#include <torch/torch.h>
#include "lltm/lltm_types.h"
#include <lantern/types.h>

namespace make_raw {

void* SGD(const optim_sgd& x) {
    return make_ptr<optim_sgd>(x);
}
}

namespace from_raw {
optim_sgd SGD(void* x) {
    return *reinterpret_cast<optim_sgd*>(x);
}
}

// [[torch::export]]
void delete_optim_sgd(void* x) {
  delete reinterpret_cast<optim_sgd>(x);
}
