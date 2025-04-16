# File-Management-tool
This is c++ code for softer which is responsible for File Management
This program effectively demonstrates basic file handling techniques in C++. It allows users to create a text file, write to it, read from it, and append data to it through a simple menu-driven interface. The use of loops and conditionals provides a user-friendly experience, enabling multiple entries until the user decides to exit.


#include <iostream>: This header is included for input and output operations (e.g., cout, cin).
#include <fstream>: This header is included for file stream operations (e.g., ifstream, ofstream).
#include <string>: This header is included to use the std::string class.


void writeToFile(const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Open file in append mode
    ...
}
This function opens a file for writing in append mode. If the file is successfully opened, it prompts the user to enter data, which is then written to the file. The user can type multiple lines and type "exit" to stop writing. After writing, the file is closed.


void readFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    ...
}
This function opens a file for reading. If the file is successfully opened, it reads and displays its contents line by line until the end of the file is reached. After reading, the file is closed.


void appendToFile(const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Open file in append mode
    ...
}
This function opens a file in append mode. If the file is successfully opened, it prompts the user to enter data, which is then appended to the end of the file. The user can type multiple lines and type "exit" to stop appending. After appending, the file is closed.


int main() {
    std::string filename;
    int choice;
    ...
}
The main function is the entry point of the program. It initializes a string variable filename to store the name of the file and an integer variable choice to store the user's menu selection.


std::cout << "File Management Tool" << std::endl;
std::cout << "Enter the filename (with .txt extension): ";
std::getline(std::cin, filename);
The program prompts the user to enter the name of the file they want to work with, including the .txt extension. The input is read using std::getline to allow for spaces in the filename.


do {
    std::cout << "\nChoose an option:" << std::endl;
    std::cout << "1. Write to file" << std::endl;
    std::cout << "2. Read from file" << std::endl;
    std::cout << "3. Append to file" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    ...
} while (choice != 4);
A do-while loop is used to display a menu repeatedly until the user chooses to exit (option 4).
The user is prompted to enter their choice, which is read into the choice variable. The std::cin.ignore() function is called to clear the input buffer, ensuring that the subsequent std::getline calls work correctly.


switch (choice) {
    case 1:
        writeToFile(filename);
        break;
    case 2:
        readFromFile(filename);
        break;
    case 3:
        appendToFile(filename);
        break;
    case 4:
        std::cout << "Exiting the program." << std::endl;
        break;
    default:
        std::cout << "Invalid choice. Please try again." << std::endl;
}
A switch statement is used to determine which operation to perform based on the user's choice:
Case 1: Calls writeToFile to write data to the file.
Case 2: Calls readFromFile to read and display the file's contents.
Case 3: Calls appendToFile to append data to the file.
Case 4: Exits the program.
Default: Handles invalid choices by prompting the user to try again.


return 0;
The main function returns 0, indicating successful execution of the program.
