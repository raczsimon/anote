#include <iostream>
#include "Core/Compiler.h"
#include <string>

using namespace std;

int main()
{
    Compiler compiler;
    compiler.run("examples/hello_world.anote");

    return 0;
}
