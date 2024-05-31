add_llvm_component_library(LLVMMAILKADesc
  MAILKAMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  MAILKAInfo

  ADD_TO_COMPONENT
  MAILKA
 )
