add_llvm_component_group(MAILKA)

add_llvm_target(MAILKACodeGen
  MAILKATargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  MAILKAInfo

  ADD_TO_COMPONENT
  MAILKA
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
