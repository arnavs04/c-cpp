/*
To use this program:
1. Save this code to a file, e.g., `formatter.cpp`.
2. Compile it with C++17 support: `g++ -std=c++17 formatter.cpp -o formatter`
3. Run it on your C++ file with the full path: `./formatter /path/to/your_file.cpp`

Note: This program requires a C++17-compliant compiler and the `clang-format` tool 
to be installed on your system and available in your PATH.

As before, this program will overwrite the original file, so make sure you have 
a backup or version control in place before running it on important files.
*/

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <path/to/filename.cpp>" << std::endl;
        return 1;
    }

    fs::path filepath = argv[1];
    
    if (!fs::exists(filepath)) {
        std::cerr << "Error: File " << filepath << " does not exist." << std::endl;
        return 1;
    }

    if (!filepath.has_extension() || filepath.extension() != ".cpp") {
        std::cerr << "Error: File " << filepath << " is not a .cpp file." << std::endl;
        return 1;
    }

    fs::path temp_filepath = filepath.parent_path() / (filepath.stem().string() + "_temp.cpp");

    // Create a .clang-format file with Google style in the same directory as the input file
    fs::path config_path = filepath.parent_path() / ".clang-format";
    std::ofstream config(config_path);
    config << "BasedOnStyle: Google" << std::endl;
    config.close();

    // Run clang-format and redirect output to a temporary file
    std::string command = "clang-format \"" + filepath.string() + "\" > \"" + temp_filepath.string() + "\"";
    int result = std::system(command.c_str());

    if (result != 0) {
        std::cerr << "Error: clang-format failed. Make sure it's installed and in your PATH." << std::endl;
        fs::remove(config_path);
        return 1;
    }

    // Replace the original file with the formatted one
    try {
        fs::rename(temp_filepath, filepath);
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: Failed to replace the original file. " << e.what() << std::endl;
        fs::remove(config_path);
        fs::remove(temp_filepath);
        return 1;
    }

    // Clean up
    fs::remove(config_path);

    std::cout << "File " << filepath << " has been formatted according to Google Style Guide." << std::endl;
    return 0;
}