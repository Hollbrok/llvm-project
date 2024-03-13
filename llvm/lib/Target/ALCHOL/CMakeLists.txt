add_llvm_component_group(ALCHOL)

add_llvm_target(ALCHOLCodeGen
  ALCHOLTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  ALCHOLInfo

  ADD_TO_COMPONENT
  ALCHOL
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)