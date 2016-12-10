#ifndef CORE_COMPILER_H
#define CORE_COMPILER_H
#include <string>

using namespace std;

class Compiler
{
    public:
        Compiler();
        void run(string path);
        virtual ~Compiler();

    protected:

    private:
};

#endif // CORE_COMPILER_H
