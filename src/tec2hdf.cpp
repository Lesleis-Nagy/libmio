#include <iostream>

#include <antlr4-runtime.h>
#include <MerrillTecplotLexer.h>
#include <MerrillTecplotParser.h>
#include <Visitor.hpp>

int main(int argc, char *argv[]) {

    std::fstream stream;
    stream.open(argv[1]);

    antlr4::ANTLRInputStream input(stream);

    MerrillTecplotLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    MerrillTecplotParser parser(&tokens);

    MerrillTecplotParser::DocumentContext *tree = parser.document();

    Visitor visitor;
    FileData file_data = std::any_cast<FileData>(visitor.visitDocument(tree));

    std::cout << "file_data.title():  " << file_data.title() << std::endl;
    std::cout << "file_data.nzones(): " << file_data.nzones() << std::endl;
    std::cout << "file_data.nvert():  " << file_data.nvert() << std::endl;
    std::cout << "file_data.nelem():  " << file_data.nelem() << std::endl;
}
