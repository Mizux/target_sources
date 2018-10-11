add_executable(App src/main.cpp)
target_link_libraries(App
  PRIVATE a::A b::B ho::HO
  )

if (BUILD_TESTING)
  add_test(NAME App_UT COMMAND App)
endif()

if(ENABLE_INSTALL)
  install(TARGETS App
    EXPORT plop-targets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )
endif()
