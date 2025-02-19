#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <filesystem>

using namespace std;

const string version = "1.0.0";

string userInput(string fileName) {
    string path = "./notes/" + fileName;
    ofstream outfile;
    outfile.open(path, std::ios_base::app);
    string input;
    
    while (true) {
        cout << "Type \"END\" to terminate the session.\n" << endl;
        getline(cin, input);
        if (input == "END") {
            break;
        }
        else {
            outfile << input << "\n";
        }
        system("clear");
    }
    outfile.close();
    return path;
}

string runApp(string fileName) {
    cout << "Welcome to magiNote version " << version << "\n";
    cout << "Current session open: " << fileName << endl;
    cout << "\nBegin typing notes, line-by-line, and hitting enter between lines." << endl;
    return userInput(fileName);
}

int main(int argc, char *argv[]) {
    try {
        if (argc != 2)
            throw 0;
        string command = "node index.js " + runApp(argv[1]);
        cout << command << endl;
        system(command.c_str());
    }
    catch (int exceptionNum) {
        cout << "Error: incorrect number of arguments." << endl;
        cout << "The correct format is: ./magiNote [Session Name]" << endl;
        return 0;
    }
    return 0;
}
