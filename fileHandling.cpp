// File Handling 
/*
    In C++, file handling is managed using the <fstream> library, which provides three main classes:

    ifstream: For reading from files (input).

    ofstream: For writing to files (output).

    fstream: For both reading and writing.
*/
/*
========================== Text Files & Writing Files ===============================
Text files store data as readable characters (like a standard .txt file). 
Writing to a text file is very similar to using 
std::cout, but instead of printing to the screen, you direct the data stream into a file using ofstream.
*/

#include <iostream>
#include <fstream> // Required for file handling

int main() {
    // Create an output file stream object and open "example.txt"
    std::ofstream outFile("example.txt");

    // Check if the file opened successfully
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Writing text to the file using the stream insertion operator (<<)
    outFile << "Hello, World!\n";
    outFile << "Welcome to C++ File Handling.\n";
    outFile << 42 << "\n"; // You can write numbers just like in cout

    // Close the file explicitly (good practice)
    outFile.close(); 

    std::cout << "Data successfully written to text file." << std::endl;
    return 0;
}