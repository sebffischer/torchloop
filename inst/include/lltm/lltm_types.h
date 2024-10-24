#include <torch/torch.h>

using optim_sgd = torch::optim::SGD*;
using graph_function = torch::jit::GraphFunction*;
using stack = torch::jit::Stack*;

// casting to and from raw pointers
namespace make_raw {
    void* SGD(const optim_sgd& x);
    void* GraphFunction(const graph_function& x);
    void* Stack(const stack& x);
}

namespace from_raw {
    optim_sgd SGD(void* x);
    graph_function GraphFunction(void* x);
    stack Stack(void* x);
}
