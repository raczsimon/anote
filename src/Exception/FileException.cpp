#include "Exception/FileException.h"

FileException::FileException(string error)
{
    message = error;
}

const char* what() const throw (){
    return message;
}

FileException::~FileException()
{
    //dtor
}
