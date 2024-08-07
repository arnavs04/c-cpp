#include <iostream>
#include <fstream>
#include <string>

void processMarkdownFile(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream inputFile(inputFilePath);
    std::ofstream outputFile(outputFilePath);

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::string processedLine;
        bool insideColon = false;

        for (char c : line) {
            if (c == ':') {
                insideColon = !insideColon;
                continue;
            }
            if (!insideColon) {
                processedLine += c;
            }
        }

        // Remove space after colons if it exists
        if (!processedLine.empty() && processedLine[0] == ' ') {
            processedLine.erase(processedLine.begin());
        }

        outputFile << processedLine << std::endl;
    }

    inputFile.close();
    outputFile.close();
}

int main() {
    std::string inputFilePath = "input.md";
    std::string outputFilePath = "output.md";

    processMarkdownFile(inputFilePath, outputFilePath);

    std::cout << "Processing complete. Check the output file: " << outputFilePath << std::endl;

    return 0;
}