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



int main() {
    // antlr
    std::string input = "1+2*3";    
    antlr4::ANTLRInputStream inputStream(input);
    ExprLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    antlr4::tree::ParseTree *tree = parser.prog();
    std::cout << tree->toStringTree(&parser) << std::endl;
    return 0;
}
