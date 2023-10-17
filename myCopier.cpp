#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <source_file> <destination_file>" << std::endl;
        return 1;
    }

    // Open the source file for reading
    std::ifstream sourceFile(argv[1]);
    if (!sourceFile.is_open()) {
        std::cerr << "Error: Cannot open source file." << std::endl;
        return 1;
    }

    // Open the destination file for writing
    std::ofstream destinationFile(argv[2]);
    if (!destinationFile.is_open()) {
        std::cerr << "Error: Cannot open destination file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(sourceFile, line)) {
        // Write each line from the source file to the destination file
        destinationFile << line << std::endl;
    }

    // Close both files
    sourceFile.close();
    destinationFile.close();

    std::cout << "File copy successful." << std::endl;

    return 0;
}

