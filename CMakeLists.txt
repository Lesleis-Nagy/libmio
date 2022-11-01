cmake_minimum_required(VERSION 3.20)
project(libmio)

set(CMAKE_CXX_STANDARD 20)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

set(LIBMIO_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(LIBMIO_SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(LIBMIO_THIRD_PARTY_DIR "${CMAKE_SOURCE_DIR}/third-party")
set(LIBMIO_GRAMMAR_INCLUDE_DIR "${LIBMIO_SRC_DIR}/grammar")

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

include(ExternalProject)

##############################################################################
# Thirdparty libraries.                                                      #
##############################################################################

set(ANTLR_SRC_DIR "${LIBMIO_THIRD_PARTY_DIR}/antlr-v4.10.1")

set(ANTLR_DIR "${CMAKE_BINARY_DIR}/antlr")
set(ANTLR_LIB_DIR "${ANTLR_DIR}/lib")
set(ANTLR_LIBRARY "${ANTLR_LIB_DIR}/libantlr4-runtime.a")
set(ANTLR_INCLUDE_DIR "${ANTLR_DIR}/include/antlr4-runtime")

ExternalProject_Add(antlr
    SOURCE_DIR ${ANTLR_SRC_DIR}
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${ANTLR_DIR}
               -DCMAKE_BUILD_TYPE=Release)

message(STATUS "ANTLR_SRC_DIR: ${ANTLR_SRC_DIR}")
message(STATUS "ANTLR_DIR: ${ANTLR_DIR}")
message(STATUS "ANTLR_LIB_DIR: ${ANTLR_LIB_DIR}")
message(STATUS "ANTLR_LIBRARY: ${ANTLR_LIBRARY}")
message(STATUS "ANTLR_INCLUDE_DIR: ${ANTLR_INCLUDE_DIR}")

add_subdirectory(src)

