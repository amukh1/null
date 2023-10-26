#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <memory>

// antlr files in ./antlr
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
// listener and visitor
#include "ExprListener.h"

#include "visitor.h"


// class TreeShapeListener : public ExprListener {
// public:
//     void enterKey()
// };

int main() {
    std::ifstream stream;
    stream.open("main.d");
    if (!stream.good()) {
        std::cerr << "Couldn't open file\n";
        std::exit(1);
    }
    antlr4::ANTLRInputStream inputStream(stream);
    ExprLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    antlr4::tree::ParseTree * tree = parser.prog();

    MyVisitor visitor;
    visitor.visit(tree);
}
