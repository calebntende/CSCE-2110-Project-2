//
// Created by Dorothy Ntende on 3/14/24.
//

#include "Functions.h"



void OpenFile(ifstream &fin, string &filename, int &Timesteps, int &Refreshrate, vector<string> &fileplaceholdervalues)
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
void GetRowsAndColumns(vector<vector<Cell> >&region, ifstream& regionfile,string &line,int &numRows, int &maxCols,string &filename)
{
    cout<<"reading data from file"<<endl;
    regionfile.open(filename);
    if(regionfile.fail())
    {
        cout<<"region file not found"<<endl;
        exit(0);
    }

    numRows = 0;
    maxCols = 0;
    while(std::getline(regionfile, line))
    {
        std::vector<Cell> row;
        std::istringstream iss(line);
        Cell value;
        int numCols=0;
        while (getline(iss,value.type,','))
        {
            row.push_back(value);
            ++numCols;
        }
        if(numCols > maxCols)
        {
            maxCols = numCols;
        }
        region.push_back(row);
        ++numRows;
    }
    regionfile.close();
    std::cout << "Number of rows: " << numRows << std::endl;
    std::cout << "Number of columns: " << maxCols  << std::endl;
    cout <<endl;

}