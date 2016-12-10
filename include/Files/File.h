#ifndef FILES_FILE_H
#define FILES_FILE_H
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class File
{
    public:
        File();
        bool openFile(string path, string type);
        istream getStream();
        vector<string> getLines();
        virtual ~File();

    protected:

    private:
        ifstream filestreamInput;
        ofstream filestreamOutput;
};

#endif // FILES_FILE_H
