#ifndef GRAMMAR_H
#define GRAMMAR_H
#include <string>

using namespace std;

class Grammar
{
    public:
        Grammar();
        virtual bool apply(string token);
        virtual ~Grammar();

    protected:

    private:
};

#endif // GRAMMAR_H
