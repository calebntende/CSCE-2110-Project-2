#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void OpenFile(ifstream &fin, string &filename, int &Timesteps, int &Refreshrate, int &Timecounter, vector<string> &fileplaceholdervalues);

int main()
{

    ifstream fin;
    string filename="config1.txt";
    fin.open(filename);
    if(fin.fail())
    {
        cout << "file not found\n";
        exit(0);
    }

     int TimeSteps;
     int RefreshRate;
     int TimeCounter;
     vector<string> fileplaceholder;

    
    cout << "Hello, World!" << endl;
    return 0;
}

void OpenFile(ifstream &fin, string &filename, int &Timesteps, int &Refreshrate, int &Timecounter, vector<string> &fileplaceholdervalues)
{
    string tempvalues;

    while (!(fin.eof()))
    {
        getline(fin, tempvalues, ':');
        fin >> tempvalues;
        fileplaceholdervalues.push_back(tempvalues);
    }

    filename = fileplaceholdervalues.at(0);
    Timesteps = stoi(fileplaceholdervalues.at(1));
    Refreshrate = stoi(fileplaceholdervalues.at(2));
    fin.close();
}
