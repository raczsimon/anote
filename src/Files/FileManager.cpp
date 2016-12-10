#include "Files/FileManager.h"

FileManager::FileManager()
{
}

FileManager::openFile(char* path)
{
    return filestream.open(path);
}

FileManager::getFilestream()
{
    return filestream;
}

FileManager::~FileManager()
{
}
