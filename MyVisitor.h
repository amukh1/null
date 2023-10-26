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
#include "ExprVisitor.h"

class MyVisitor : public ExprBaseVisitor {
    antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override;
};