#include "TargetInfo/MAILKATargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheMAILKATarget() {
  static Target TheMAILKATarget;
  return TheMAILKATarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeMAILKATargetInfo() {
  RegisterTarget<Triple::mailka> X(getTheMAILKATarget(), "mailka", "MAILKA 64",
                                   "MAILKA");
}
