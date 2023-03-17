cmake_minimum_required(VERSION 3.20)
project(libmio)

set(CMAKE_CXX_STANDARD 20)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# Source directories.
set(LIBMIO_INCLUDES "${CMAKE_SOURCE_DIR}/include")
set(LIBMIO_SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(LIBMIO_GRAMMAR_INCLUDE_DIR "${LIBMIO_SRC_DIR}/grammar")

# Directories used for third party s/w libraries.
set(LIBMIO_THIRD_PARTY_DIR "${CMAKE_SOURCE_DIR}/third-party")
set(LIBMIO_BUILD_DIR       "${CMAKE_BINARY_DIR}/build")
set(LIBMIO_INSTALL_DIR     "${CMAKE_BINARY_DIR}/install")

file(MAKE_DIRECTORY        ${LIBMIO_BUILD_DIR})
file(MAKE_DIRECTORY        ${LIBMIO_INSTALL_DIR})

# Include our build_antlr4() macro & run it.
include(antlr4)
build_antlr4()

message("ANTLR4_INCLUDES:  ${ANTLR4_INCLUDES}")
message("ANTLR4_LIBRARIES: ${ANTLR4_LIBRARIES}")

add_subdirectory(src)
