project(foo)

add_library(foo INTERFACE)
target_sources(foo INTERFACE foo.h)
