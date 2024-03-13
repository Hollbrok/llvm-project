add_llvm_component_library(LLVMALCHOLDesc
  ALCHOLMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  ALCHOLInfo

  ADD_TO_COMPONENT
  ALCHOL
 )