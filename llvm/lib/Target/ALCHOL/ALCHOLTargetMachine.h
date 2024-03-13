//===-- ALCHOLTargetMachine.h - Define TargetMachine for ALCHOL -*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares the ALCHOL specific subclass of TargetMachine.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_ALCHOL_ALCHOLTARGETMACHINE_H
#define LLVM_LIB_TARGET_ALCHOL_ALCHOLTARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include <optional>

namespace llvm {
extern Target TheALCHOLTarget;

class ALCHOLTargetMachine : public LLVMTargetMachine {
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
public:
  ALCHOLTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      std::optional<Reloc::Model> RM,
                      std::optional<CodeModel::Model> CM, CodeGenOpt::Level OL,
                      bool JIT, bool isLittle);

  ALCHOLTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      std::optional<Reloc::Model> RM,
                      std::optional<CodeModel::Model> CM, CodeGenOpt::Level OL,
                      bool JIT);

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
};
} // end namespace llvm

#endif // LLVM_LIB_TARGET_ALCHOL_ALCHOLTARGETMACHINE_H