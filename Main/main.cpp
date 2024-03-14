#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Cell.h"
#include "../Functions/Functions.h"

using namespace std;



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
     OpenFile(fin,filename,TimeSteps,RefreshRate,fileplaceholder);
     cout << "filename: " <<filename << endl;
     cout << "Timelimit: " << TimeSteps << endl;
     cout << "Refreshrate: " << RefreshRate << endl;
     vector<vector<Cell> >date ;
     ifstream regionfile;
        string line;
        int numRows = 0;
        int maxCols = 0;
        string filename2;
        vector<vector<Cell> > region;
        GetRowsAndColumns(region,regionfile,line,numRows,maxCols,filename);
        cout << "Number of rows: " << numRows << endl;
        cout << "Number of columns: " << maxCols << endl;
    return 0;
}

