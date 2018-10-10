add_library(A "")
target_sources(A
  PRIVATE src/A.cc
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/a/A.h
)
target_include_directories(${_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
add_library(a::A ALIAS A)
