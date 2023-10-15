cmake_minimum_required(VERSION 3.25)
project(libycenv LANGUAGES C VERSION 0.1.0)

set(CMAKE_C_STANDARD 99)
add_compile_options(-Wall -Wextra -pedantic -Werror)

FILE(GLOB_RECURSE YCENV_SOURCES source/ source/**)

add_library(ycenv ${YCENV_SOURCES})
target_include_directories(ycenv PUBLIC include)
target_include_directories(ycenv PRIVATE private)

add_subdirectory(examples/dependencies/libycres)
target_link_libraries(ycenv ycres)
