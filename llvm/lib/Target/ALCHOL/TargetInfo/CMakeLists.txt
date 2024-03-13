add_llvm_component_library(LLVMALCHOLInfo
  ALCHOLTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  ALCHOL
  )