cmake_minimum_required(VERSION 3.21)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPe Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

project(basalt VERSION 0.1)
# file(GLOB_RECURSE LIB_SOURCES src/*.c)
# file(GLOB_RECURSE LIB_HEADERS include/*.h)
# add_library(basalt STATIC ${LIB_SOURCES} ${LIB_HEADERS})
# target_include_directories(basalt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# install(TARGETS basalt DESTINATION lib)
# install(FILES ${LIB_HEADERS} DESTINATION include/basalt)

file(GLOB_RECURSE SRC_FILES src/*.c)
add_executable(basalt ${SRC_FILES})
target_include_directories(basalt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
