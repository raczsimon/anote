#include "Core/Compiler.h"
#include "Core/Parser.h"
#include "Files/File.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

Compiler::Compiler()
{
}

void Compiler::run(string path)
{
    File file;
    if (file.openFile(path, "r")) {
        vector<string> lines = file.getLines();
        Parser parser;

        for (string line : lines) {
            parser.parse(line);
        }
    } else {
        cout << "(Files/File: " + path + ") - File has not been found";
    }
}

Compiler::~Compiler()
{
    //dtor
}
