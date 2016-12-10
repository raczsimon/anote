#include "Files/File.h"
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>

using namespace std;

File::File()
{
}

bool File::openFile(string path, string type)
{
    if(type == "r") {
        filestreamInput.open(path);

        if (filestreamInput.is_open()) {
            return true;
        } else {
            return false;
        }
    } else if (type == "w") {
        filestreamOutput.open(path);

        if (filestreamInput.is_open()) {
            return true;
        } else {
            return false;
        }
    }
}

vector<string> File::getLines()
{
    vector<string> lines;
    string token;

    while (getline(filestreamInput, token)) {
        lines.push_back(token);
    }

    return lines;
}

File::~File()
{
    filestreamInput.close();
    filestreamOutput.close();
}
