add_library(A "")
target_sources(A PRIVATE
  include/a/A.h
  src/A.cc
  )
target_include_directories(A PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
set_target_properties(A PROPERTIES
  PUBLIC_HEADER "include/a/A.h")
add_library(a::A ALIAS A)

if(ENABLE_INSTALL)
  install(TARGETS A
    EXPORT plop-targets
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/a
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )
endif()
