#include <iostream>

#include <antlr4-runtime.h>
#include <MerrillTecplotLexer.h>
#include <MerrillTecplotParser.h>
#include <MerrillTecplotBaseVisitor.h>

class MerrillTecplotVisitorImpl : public MerrillTecplotBaseVisitor {
public:
    std::any visitDocument(MerrillTecplotParser::DocumentContext *ctx) override {
        std::any result = visitChildren(ctx);
        if (!ctx->title()->isEmpty()) {
            std::cout << "Title: " << ctx->title()->StringLiteral()->getText() << "\n";
        }
        return result;
    }
};

int main(int argc, char *argv[]) {

    std::fstream stream;
    stream.open(argv[1]);

    antlr4::ANTLRInputStream input(stream);

    MerrillTecplotLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    MerrillTecplotParser parser(&tokens);

    MerrillTecplotParser::DocumentContext *tree = parser.document();

    MerrillTecplotVisitorImpl visitor;
    visitor.visitDocument(tree);
}
