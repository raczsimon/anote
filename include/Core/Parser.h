#ifndef PARSER_H
#define PARSER_H
#include "Lang/Grammar.h"
#include <string>
#include <vector>

using namespace std;

class Parser
{
    public:
        Parser();
        void parse(string line);
        virtual ~Parser();

    protected:

    private:
        vector<Grammar> grammar;
};

#endif // PARSER_H
