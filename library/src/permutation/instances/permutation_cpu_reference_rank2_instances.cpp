/*******************************************************************************
 *
 * MIT License
 *
 * Copyright (C) 2023-2025 Advanced Micro Devices, Inc. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *******************************************************************************/

#include "../permutation_cpu_reference_impl.hpp"
#include "../permutation_cpu_reference_instances.hpp"
#include <hiptensor_unary_element_wise_operation.hpp>

namespace hiptensor
{
    void PermutationCpuReferenceInstances::PermutationCpuReference2DInstances()
    {
        // Register all the solutions exactly once
        // 2d Permutation
        registerSolutions(
            enumerateReferenceSolutions<ck::Tuple<float>,
                                        ck::Tuple<float>,
                                        ck::tensor_operation::element_wise::HiptensorUnaryOp,
                                        ck::tensor_operation::element_wise::HiptensorUnaryOp,
                                        ck::tensor_operation::element_wise::Scale,
                                        2>());

        registerSolutions(
            enumerateReferenceSolutions<ck::Tuple<ck::half_t>,
                                        ck::Tuple<ck::half_t>,
                                        ck::tensor_operation::element_wise::HiptensorUnaryOp,
                                        ck::tensor_operation::element_wise::HiptensorUnaryOp,
                                        ck::tensor_operation::element_wise::Scale,
                                        2>());
    }
} // namespace hiptensor
