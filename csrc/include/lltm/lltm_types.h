#include <torch/torch.h>

using optim_sgd = torch::optim::SGD*;

// casting to and from raw pointers
namespace make_raw {
    void* SGD(const optim_sgd& x);
}

namespace from_raw {
    optim_sgd SGD(void* x);
}
