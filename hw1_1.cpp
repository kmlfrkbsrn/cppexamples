// I learned with this code how can i find line count.
#include <iostream>
#include <fstream>
using namespace std;

    int main(){
        int count=0;
        string line;

        ifstream file("data.dat");
        while (getline(file, line))
            count++;
        
        cout<< "There are " << count << " lines in the text" << endl;

        return 0;

    }

// Notes;
// ofstream- This class describes an output stream. It is used to create files and to write data to files.
// ifstream- This class describes an input stream. It's a program that reads data from files and displays it.
// fstream- This class describes a file stream in general. It has ofstream and ifstream capabilities. This means it can create files, write to files, and read data from files.