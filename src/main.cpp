// src/main.cpp
#include <iostream>
extern void list_files(const std::string& path);  // Declare the function

int main() {    
    std::cout << "*Listing files in current directory:" << std::endl;
    list_files(".");  // Call the function
    return 0;
}
