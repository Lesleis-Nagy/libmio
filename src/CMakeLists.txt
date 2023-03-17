add_executable(tec2hdf tec2hdf.cpp)

target_include_directories(tec2hdf
    PUBLIC ${LIBMIO_INCLUDES}
           ${ANTLR4_INCLUDES})

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/grammar)
add_custom_target(tec2hdf_antlr4
        COMMAND ${ANTLR4_EXE} -listener -visitor -Dlanguage=Cpp ${CMAKE_SOURCE_DIR}/grammar/MerrillTecplot.g4 -o .
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/antlr/grammar
        SOURCES           ${CMAKE_SOURCE_DIR}/grammar/MerrillTecplot.g4
        BYPRODUCTS        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotBaseVisitor.cpp
        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotLexer.cpp
        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotParser.cpp
        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotVisitor.cpp)
include_directories(${CMAKE_BINARY_DIR}/antlr/grammar)
add_dependencies(tec2hdf tec2hdf_antlr4)

target_link_libraries(tec2hdf merrilltecplot)

add_library(merrilltecplot
        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotBaseVisitor.cpp
        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotLexer.cpp
        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotParser.cpp
        ${CMAKE_BINARY_DIR}/antlr/grammar/MerrillTecplotVisitor.cpp)
target_include_directories(merrilltecplot
        PUBLIC ${ANTLR4_INCLUDES})
target_link_libraries(merrilltecplot
        ${ANTLR4_LIBRARIES})
