//===-- ALCHOLMCTargetDesc.cpp - ALCHOL target descriptions ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
#include "ALCHOLMCTargetDesc.h"

// We need to define this function for linking succeed
extern "C" void LLVMInitializeALCHOLTargetMC() {}