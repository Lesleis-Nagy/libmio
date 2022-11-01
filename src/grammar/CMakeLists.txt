
add_library(merrilltecplot
    MerrillTecplotBaseVisitor.cpp
    MerrillTecplotLexer.cpp
    MerrillTecplotParser.cpp
    MerrillTecplotVisitor.cpp)
target_include_directories(merrilltecplot
    PUBLIC ${ANTLR_INCLUDE_DIR})
target_link_libraries(merrilltecplot
    ${ANTLR_LIBRARY})

