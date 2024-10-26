#' @export
optim_sgd <- torch::optimizer(
  "optim_sgd",
  initialize = function(params, lr, momentum = 0, dampening = 0, weight_decay = 0,
                        nesterov = FALSE) {
    self$opt <- optim_sgd_new(params, lr, momentum, dampening, weight_decay,
                              nesterov)
  },
  step = function() {
    optim_sgd_step(self$opt)
  },
  zero_grad = function() {
    optim_sgd_zero_grad(self$opt)
  }
)
