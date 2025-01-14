// src/file_utils.cpp
#include <boost/filesystem.hpp>
#include <iostream>

void list_files(const std::string& path) {
    boost::filesystem::path dir(path);
    if (boost::filesystem::exists(dir) && boost::filesystem::is_directory(dir)) {
        for (const auto& entry : boost::filesystem::directory_iterator(dir)) {
            std::cout << entry.path().string() << std::endl;
        }
    } else {
        std::cout << "Invalid directory: " << path << std::endl;
    }
}
