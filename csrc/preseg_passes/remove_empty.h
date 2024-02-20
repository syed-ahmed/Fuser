// clang-format off
/*
 * SPDX-FileCopyrightText: Copyright (c) 2023-present NVIDIA CORPORATION & AFFILIATES.
 * All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 */
// clang-format on
#include <exceptions.h>
#include <preseg_passes/optimization_pass.h>
#include <visibility.h>

namespace nvfuser::preseg_passes {

//! RemoveEmptyPass removes intermediate empty tensors (those with at least one
//! extent zero thar are neither a fusion output or input).
class NVF_API RemoveEmptyPass : public OptimizationPass<RemoveEmptyPass> {
  friend class OptimizationPass<RemoveEmptyPass>;

 protected:
  static void runPass(Fusion* fusion);
};

} // namespace nvfuser::preseg_passes
