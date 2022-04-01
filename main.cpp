// Title : Basic Process with File
// Purpose : Open, Check file open, read from file, check if the reading is not fail, then close file
// Enjoy the process - Practice makes Improvement
// Auhor : Fransiskus Agapa

#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::getline;

int main() {

    ifstream in;                                                // ifstream object to deal with file
    string file;                                                // extract data from file
    int numFile = 0;                                            // to number the file

    in.open("myFile.txt");                                      // open file
    if(!in.is_open())                                           // check if file is open
    {
        cout << " File cannot be opened " << endl;
        return 1;                                               // terminates program and indicate fail code
    }

    cout << "Reading file ... " << endl << endl;

    getline(in, file);                                         // extract data from file
    while(!in.fail())                                           // makes sure no error while reading from file
    {
        numFile++;
        if(file.empty())                                       // if the file empty
        {
            cout << ' ' << numFile << '.' << "[Blank]" << endl;
        } else
        {
            cout << ' ' << numFile << '.' << file << endl;
        }
        getline(in, file);

    }
    cout << endl;

    if(!in.eof())                                               // if there is error while reading file before end of file
    {
        cout << " not able to finish task " << endl;
    }

    cout << "Closing myFile.txt" << endl;
    in.close();                                                 // always close file after done with it

    return 0;
}
