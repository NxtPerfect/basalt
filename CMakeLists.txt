cmake_minimum_required(VERSION 3.21)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
project(basalt VERSION 0.1)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPe Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# file(GLOB_RECURSE LIB_SOURCES src/*.c)
# file(GLOB_RECURSE LIB_HEADERS include/*.h)
# add_library(basalt STATIC ${LIB_SOURCES} ${LIB_HEADERS})
# target_include_directories(basalt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# install(TARGETS basalt DESTINATION lib)
# install(FILES ${LIB_HEADERS} DESTINATION include/basalt)

file(GLOB_RECURSE SRC_FILES src/*.c)
file(GLOB_RECURSE HEADER_FILES include/*.h)
add_executable(basalt ${SRC_FILES} ${HEADER_FILES})
# target_include_directories(basalt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#
# enable_testing()
#
# add_executable(unit_tests tests/tests.c)
#
# target_link_libraries(unit_tests basalt)
#
# add_test(NAME unit_tests COMMAND unit_tests)
