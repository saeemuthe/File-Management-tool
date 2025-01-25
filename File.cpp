#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string &filename) {
    ofstream outFile(filename, ios::out);
    if (outFile.is_open()) {
        string data;
        cout << "Enter data to write to the file: ";
        getline(cin, data);
        outFile << data << endl;
        outFile.close();
        cout << "Data written successfully!" << endl;
    } else {
        cerr << "Error opening file for writing!" << endl;
    }
}

void readFromFile(const string &filename) {
    ifstream inFile(filename, ios::in);
    if (inFile.is_open()) {
        string line;
        cout << "File content:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cerr << "Error opening file for reading!" << endl;
    }
}

void appendToFile(const string &filename) {
    ofstream outFile(filename, ios::app);
    if (outFile.is_open()) {
        string data;
        cout << "Enter data to append to the file: ";
        getline(cin, data);
        outFile << data << endl;
        outFile.close();
        cout << "Data appended successfully!" << endl;
    } else {
        cerr << "Error opening file for appending!" << endl;
    }
}

int main() {
    string filename = "file_management_tool.txt";
    int choice;

    do {
        cout << "\nFile Management Tool:\n";
        cout << "1. Write to file\n";
        cout << "2. Read from file\n";
        cout << "3. Append to file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To clear the input buffer

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
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
