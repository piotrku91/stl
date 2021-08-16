#pragma once
#include <map>
#include <string>
#include <cmath>
#include "ExpressionParser.hpp"

enum class ErrorCode {
    OK,
    BadCharacter,
    BadFormat,
    DivideBy0,
    SqrtOfNegativeNumber,
    ModuleOfNonIntegerValue
};

extern std::map<char, std::function<double(double a, double b)>> MapCommands_;

ErrorCode process(std::string input, double* out);