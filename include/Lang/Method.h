#ifndef LANG_METHOD_H
#define LANG_METHOD_H
#include "Lang/Grammar.h"
#include <string>
#include <regex>

using namespace std;

class Method : public Grammar
{
    public:
        Method();
        virtual bool apply(string token);
        virtual ~Method();

    protected:

    private:
        regex pattern;
};

#endif // LANG_METHOD_H
