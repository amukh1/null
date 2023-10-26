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
#include "ExprBaseVisitor.h"

#include "MyVisitor.h"

antlrcpp::Any MyVisitor::visitProg(ExprParser::ProgContext *ctx) {
    std::cout << "visiting pasr program" << std::endl;
    std::cout << ctx->getText() << std::endl;
    return visitChildren(ctx);
}