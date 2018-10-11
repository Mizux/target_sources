cmake_minimum_required(VERSION 3.5)

project(plop VERSION 1.0 LANGUAGES CXX)

include(CTest)
include(GNUInstallDirs)
set(CMAKE_VERBOSE_MAKEFILE ON)
option(BUILD_SHARED_LIBS "Build shared libraries(.so or .dyld)." ON)

add_subdirectory(libA)
add_subdirectory(libB)
add_subdirectory(libHO)
add_subdirectory(App)

install(EXPORT ${PROJECT_NAME}-targets
        NAMESPACE plop::
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}
        COMPONENT Devel)
include(CMakePackageConfigHelpers)
configure_package_config_file(cmake/${PROJECT_NAME}-config.cmake.in
  "${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
  INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
  NO_SET_AND_CHECK_MACRO
  NO_CHECK_REQUIRED_COMPONENTS_MACRO)
write_basic_package_version_file(
  "${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake"
  COMPATIBILITY SameMajorVersion)
install(
  FILES
  "${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config.cmake"
  "${PROJECT_BINARY_DIR}/${PROJECT_NAME}-config-version.cmake"
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}"
  COMPONENT Devel)
