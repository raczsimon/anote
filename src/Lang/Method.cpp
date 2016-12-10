#include "Lang/Method.h"
#include <regex>

using namespace std;

Method::Method()
{
    regex pattern ("/([a-z]*)\((.*)\);/");
}

bool Method::apply(string token)
{
    if (regex_match(token, pattern)) {
        return true;
    } else {
        return false;
    }
}

Method::~Method()
{
}
