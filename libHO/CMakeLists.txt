add_library(HO INTERFACE)
if(ENABLE_INSTALL)
  target_sources(HO INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/ho/HO.h>
    $<INSTALL_INTERFACE:include/ho/HO.h>
    )
else()
  target_sources(HO INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ho/HO.h
    )
endif()
target_include_directories(HO INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
# not allowed yet for INTERFACE
#set_target_properties(HO PROPERTIES
#    PUBLIC_HEADER "include/ho/HO.h")
add_library(ho::HO ALIAS HO)

if(ENABLE_INSTALL)
  install(TARGETS HO
    EXPORT plop-targets
    #PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/ho
    )
  install(FILES
    include/ho/HO.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/ho)
endif()
