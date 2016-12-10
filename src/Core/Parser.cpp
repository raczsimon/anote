#include "Core/Parser.h"
#include "Lang/Method.h"
#include "Lang/Grammar.h"

#include <iostream>
#include <vector>

using namespace std;

Parser::Parser() {
    Method method;
    grammar.push_back(method);
}

void Parser::parse(string line) {
    for (Grammar parser : grammar) {
        if( parser.apply(line) ) {
            cout << "FOUND A METHOD";
        }
    }
}

Parser::~Parser() {}
