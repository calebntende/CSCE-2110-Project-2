#include <iostream>
#include <fstream>

using namespace std;

void OpenFile(fstream &fin, string filename);

int main() {

    fstream fin;

    cout << "Hello, World!" << endl;
    return 0;
}

void OpenFile(fstream &fin, string filename) {
    fin.open(filename, ios::in);
    if (fin.fail()) {
        cout << "File not found" << endl;
        exit(1);
    }
}
