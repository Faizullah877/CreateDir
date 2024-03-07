#include <iostream>
#include <string>

#ifdef _WIN32 // Windows-specific code
#include <direct.h>
#define MKDIR _mkdir
#else // Linux-specific code
#include <sys/stat.h>
#define MKDIR(path) mkdir(path, 0777)
#endif


bool createFolder(const std::string& folderPath) {
    if (MKDIR(folderPath.c_str()) == 0 || errno == EEXIST) {
        std::cout << "Folder exists or created successfully: " << folderPath << std::endl;
        return true;
    }
    else {
        std::cerr << "Failed to create folder: " << folderPath << std::endl;
        return false;
    }
}

int main() {
    std::string folderPath = "NewFolderbyFaiz";
    bool success = createFolder(folderPath);
    if (success) {
        std::cout << "Folder operation succeeded!" << std::endl;
    }
    else {
        std::cerr << "Folder operation failed!" << std::endl;
    }
    return 0;
}