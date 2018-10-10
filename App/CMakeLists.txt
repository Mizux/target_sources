add_executable(App src/main.cpp)
target_link_libraries(App
  PRIVATE a::A ho::HO
)

if (BUILD_TESTING)
  add_test(NAME App_UT COMMAND App)
endif()
