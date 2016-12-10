#ifndef EXCEPTION_FILEEXCEPTION_H
#define EXCEPTION_FILEEXCEPTION_H
#include <exception>
#include <string>

using namespace std;

class FileException : public exception
{
    public:
        FileException::FileException(string error)
        {
            message = error;
        }

        virtual const char* what() const throw (){
            return message;
        }

        virtual ~FileException();

    protected:

    private:
        string message;
};

#endif // EXCEPTION_FILEEXCEPTION_H
