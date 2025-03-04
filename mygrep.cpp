#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void simple() {
    string input, search;
    
    cout << "Give a string from which to search for: ";
    getline(cin, input);
    
    cout << "Give search string: ";
    getline(cin, search);
    
    size_t pos = input.find(search);

    if (pos != string::npos) {
        cout << "\"" << search << "\" found in \"" << input
             << "\" in position " << pos << endl;
    } else { 
        cout << "\"" << search << "\" NOT found in \"" << input << "\"" << endl;
    }
}

void fileSearch(const string& searchString, const string& fileName) {
    ifstream file(fileName);
    if (!file) {
        cerr << "Error: Cannot open file " << fileName << "\n";
        return;
    }
    
    string line;
    bool found = false;
    while (getline(file, line)) {
        if (line.find(searchString) != string::npos) {
            cout << line << "\n";
            found = true;
        }
    }
    if (!found) {
        cerr << "Error: The search string \"" << searchString << "\" was not found in the file \"" << fileName << "\".\n";
}}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        simple();
    } else if (argc ==3) {
        string searchString = argv[1];
        string fileName = argv[2] ;
        fileSearch(searchString, fileName);
    }
    return 0;
}