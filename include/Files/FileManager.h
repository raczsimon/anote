#ifndef FILES_FILE_H
#define FILES_FILE_H
#include  <fstream>

using namespace std;

class FileManager
{
    public:
        FileManager();
        fstream openFile(char* path);
        fstream getFilestream();
        virtual ~FileManager();

    protected:

    private:
        fstream filestream;
};

#endif // FILES_FILE_H
