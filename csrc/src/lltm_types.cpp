#include <torch/torch.h>
#include "lltm/lltm_types.h"
#include <lantern/types.h>

namespace make_raw {

void* SGD(const optim_sgd& x) {
    return make_ptr<optim_sgd>(x);
}
void* GraphFunction(const graph_function& x) {
    return make_ptr<graph_function>(x);
}
void* Stack(const stack& x) {
    return make_ptr<stack>(x);
}
}

namespace from_raw {
optim_sgd SGD(void* x) {
    return *reinterpret_cast<optim_sgd*>(x);
}
graph_function GraphFunction(void* x) {
    return *reinterpret_cast<graph_function*>(x);
}
stack Stack(void* x) {
    return *reinterpret_cast<stack*>(x);
}
}

// [[torch::export]]
void delete_optim_sgd(void* x) {
  delete reinterpret_cast<optim_sgd>(x);
}
// [[torch::export]]
void delete_graph_function(void* x) {
  delete reinterpret_cast<graph_function>(x);
}

// [[torch::export]]
void delete_stack2(void* x) {
  delete reinterpret_cast<stack>(x);
}
