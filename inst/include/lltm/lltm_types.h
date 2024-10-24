#include <torch/torch.h>

using optim_sgd = torch::optim::SGD*;
using jit_module = torch::jit::script::Module*;

// casting to and from raw pointers
namespace make_raw {
    void* SGD(const optim_sgd& x);
    void* JitModule(const jit_module& x);
}

namespace from_raw {
    optim_sgd SGD(void* x);
    jit_module JitModule(void* x);
}
