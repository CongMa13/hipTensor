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

#ifndef HIPTENSOR_PERMUTATION_TEST_PARAMS_HPP
#define HIPTENSOR_PERMUTATION_TEST_PARAMS_HPP

#include <tuple>
#include <vector>

#include <hiptensor/hiptensor.hpp>
#include <hiptensor/hiptensor_types.hpp>

#include "utils.hpp"

namespace hiptensor
{

    struct PermutationTestParams
    {
        using DataTypesT = std::vector<hipDataType>;

        using LogLevelT     = hiptensorLogLevel_t;
        using LengthsT      = std::vector<std::size_t>;
        using AlphaT        = double;
        using PermutedDimsT = std::vector<std::size_t>;
        using OperatorT     = std::vector<hiptensorOperator_t>;

    public:
        std::vector<DataTypesT>& dataTypes()
        {
            return mDataTypes;
        }

        LogLevelT& logLevelMask()
        {
            return mLogLevelMask;
        }

        std::vector<LengthsT>& problemLengths()
        {
            return mProblemLengths;
        }

        std::vector<OperatorT>& operators()
        {
            return mOperators;
        }

        std::vector<PermutedDimsT>& permutedDims()
        {
            return mPermutedDims;
        }

        std::vector<AlphaT>& alphas()
        {
            return mAlphas;
        }

        void printParams()
        {
            std::cout << "DataTypes: " << mDataTypes << "\n"
                      << "LogLevelMask: " << mLogLevelMask << "\n"
                      << "ProblemLengths: " << mProblemLengths << "\n"
                      << "Operators: " << mOperators << "\n"
                      << "Alphas: " << mAlphas << "\n"
                      << "PermutedDims: " << mPermutedDims << "\n";
        }

    private:
        //Data types of input and output tensors
        std::vector<DataTypesT>    mDataTypes;
        LogLevelT                  mLogLevelMask;
        std::vector<LengthsT>      mProblemLengths;
        std::vector<AlphaT>        mAlphas;
        std::vector<OperatorT>     mOperators;
        std::vector<PermutedDimsT> mPermutedDims;
    };

} // namespace hiptensor

#endif // HIPTENSOR_PERMUTATION_TEST_PARAMS_HPP
