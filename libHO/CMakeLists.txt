add_library(HO INTERFACE)
target_sources(HO
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include/ho/HO.h
)
target_include_directories(HO INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
  add_library(ho::HO ALIAS HO)
