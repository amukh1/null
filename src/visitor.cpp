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

#include "visitor.h"

antlrcpp::Any MyVisitor::visitProg(ExprParser::ProgContext *ctx) {
    std::cout << "visiting program:" << ctx->getText() << std::endl;
    return visitChildren(ctx);
}

std::any MyVisitor::visitExpr(ExprParser::ExprContext *ctx)
{
    std::cout << "CALLING\n";
    if (ctx->INT() == nullptr) {
        auto v = ctx->getText();
        std::cout << v << '\n';
    }
    return nullptr;
}
