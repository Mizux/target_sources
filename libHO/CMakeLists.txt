add_library(HO INTERFACE)
target_include_directories(HO INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)
# not allowed yet for INTERFACE
#set_target_properties(HO PROPERTIES
#    PUBLIC_HEADER "include/ho/HO.h")
add_library(ho::HO ALIAS HO)

install(TARGETS HO
 EXPORT plop-targets
 #PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/ho
)
install(FILES
 include/ho/HO.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/ho)
