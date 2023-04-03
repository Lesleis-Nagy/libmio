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

# Set up ANTLR4 macro & run it.
include(antlr4)
setup_antlr4()

# Set up RapidXML
include(rapidxml)
setup_rapidxml()

# Set up TaoJSON
include(taojson)
setup_taojson()

# Set up args
include(args)
setup_args()

# Set up catch2
include(catch2)
setup_catch2()

# Display a message for each of our libraries.
message(STATUS "ANTLR4_INCLUDES:   ${ANTLR4_INCLUDES}")
message(STATUS "ANTLR4_LIBRARIES:  ${ANTLR4_LIBRARIES}")
message(STATUS "ANTLR4_EXE:        ${ANTLR4_EXE}")

message(STATUS "RAPIDXML_INCLUDES: ${RAPIDXML_INCLUDES}")

message(STATUS "TAOJSON_INCLUDES:  ${TAOJSON_INCLUDES}")

message(STATUS "ARGS_INCLUDES:     ${ARGS_INCLUDES}")

message(STATUS "CATCH2_INCLUDES:   ${CATCH2_INCLUDES}")

# Descend in to the source directory.
add_subdirectory(src)

# Descend in to the toys directory.
add_subdirectory(toys)

# Descend in to the test directory.
add_subdirectory(test)
