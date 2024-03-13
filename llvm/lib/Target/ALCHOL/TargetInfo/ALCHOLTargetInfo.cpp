//===-- ALCHOLTargetInfo.cpp - ALCHOL Target Implementation ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "TargetInfo/ALCHOLTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheALCHOLTarget() {
  static Target TheALCHOLTarget;
  return TheALCHOLTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeALCHOLTargetInfo() {
  RegisterTarget<Triple::ALCHOL> X(getTheALCHOLTarget(), "ALCHOL", "ALCHOL 32",
                                   "ALCHOL");
}