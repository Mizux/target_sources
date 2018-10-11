add_library(B "")
if(ENABLE_INSTALL)
  target_sources(B
    PRIVATE
    src/B.cc
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/b/B.h>
    $<INSTALL_INTERFACE:include/b/B.h>
    )
else()
  target_sources(B
    PRIVATE
    src/B.cc
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include/b/B.h
    )
endif()
set_target_properties(B PROPERTIES
  PUBLIC_HEADER "include/b/B.h")
target_include_directories(B PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
add_library(b::B ALIAS B)

if(ENABLE_INSTALL)
  install(TARGETS B
    EXPORT plop-targets
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/b
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
endif()
