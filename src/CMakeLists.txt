
#######################################################################################################################
# Build and generate the ANTLR4 parse library.                                                                        #
#######################################################################################################################

set(ANTLR4_GEN_INCLUDES ${CMAKE_BINARY_DIR}/antlr/grammar)

file(MAKE_DIRECTORY ${ANTLR4_GEN_INCLUDES})

add_custom_target(tecplot_antlr4
        COMMAND ${ANTLR4_EXE} -listener -visitor -Dlanguage=Cpp ${CMAKE_SOURCE_DIR}/grammar/Tecplot.g4 -o .
        WORKING_DIRECTORY ${ANTLR4_GEN_INCLUDES}
        SOURCES           ${CMAKE_SOURCE_DIR}/grammar/Tecplot.g4
        BYPRODUCTS        ${ANTLR4_GEN_INCLUDES}/TecplotBaseVisitor.cpp
                          ${ANTLR4_GEN_INCLUDES}/TecplotLexer.cpp
                          ${ANTLR4_GEN_INCLUDES}/TecplotParser.cpp
                          ${ANTLR4_GEN_INCLUDES}/TecplotVisitor.cpp)

add_library(antlr4_tecplot ${ANTLR4_GEN_INCLUDES}/TecplotBaseVisitor.cpp
                           ${ANTLR4_GEN_INCLUDES}/TecplotLexer.cpp
                           ${ANTLR4_GEN_INCLUDES}/TecplotParser.cpp
                           ${ANTLR4_GEN_INCLUDES}/TecplotVisitor.cpp)

target_include_directories(antlr4_tecplot
        PUBLIC ${ANTLR4_INCLUDES}
               ${ANTLR4_GEN_INCLUDES})

target_link_libraries(antlr4_tecplot
        ${ANTLR4_LIBRARIES})

#######################################################################################################################
# User mio utilities library.                                                                                         #
#######################################################################################################################

add_library(mio_utilities utilities.cpp)
target_include_directories(mio_utilities
        PUBLIC ${LIBMIO_INCLUDES})

#######################################################################################################################
# User mio tecplot library.                                                                                           #
#######################################################################################################################

add_library(mio_tecplot tecplot.cpp)
target_include_directories(mio_tecplot
        PUBLIC ${LIBMIO_INCLUDES}
        ${ANTLR4_INCLUDES})
target_link_libraries(mio_tecplot
        mio_utilities
        antlr4_tecplot)

add_dependencies(mio_tecplot tecplot_antlr4)
