#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Cell.h"
#include "../Functions/Functions.h"

using namespace std;

int calculateAdjacentPopulation(int x, int y, vector<vector<Cell> > &region);
void GrowCell(Cell &cell, vector<vector<Cell> > &region, int x, int y);
void SimulateTimeStep(vector<vector<Cell> > &region, int &availableWorkers,int &availableGoods);

void checkAdjacentCells(int x, int y, vector<vector<Cell> > &region) {
    int dx[] = {-1, 0, 1, 0}; // direction vectors to check up, right, down, left cells
    int dy[] = {0, 1, 0, -1};

    for(int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        // Check if newX and newY are within the bounds of the region
        if(newX >= 0 && newX < region.size() && newY >= 0 && newY < region[0].size()) {
            // Access the adjacent cell using region[newX][newY]
            // You can now perform any operations on the adjacent cell
            cout << "Adjacent cell at (" << newX << ", " << newY << ") has type: " << region[newX][newY].type << endl;
        }
    }
}






int main()
{

    ifstream fin;
    string filename="config1.txt";
    fin.open(filename);
    if(fin.fail())
    {
        cout << "file not found 3422342\n";
        exit(0);
    }
     int TimeSteps;
     int RefreshRate;
     vector<string> fileplaceholder;
     OpenFile(fin,filename,TimeSteps,RefreshRate,fileplaceholder);
     cout << "filename: " <<filename << endl;
     cout << "TimeSteps: " << TimeSteps << endl;
     cout << "Refreshrate: " << RefreshRate << endl;
     vector<vector<Cell> >date,copy ;
     ifstream regionfile;
        string line;
        int numRows = 0;
        int maxCols = 0;
        int x,y;
        string filename2;
        vector<vector<Cell> > region;
        GetRowsAndColumns(region,regionfile,line,numRows,maxCols,filename);



cout << "initial region \n";




        for(int i=0; i<region.size(); i++)
        {
            for(int j=0; j<region[i].size(); j++)
            {
                    cout << region[i][j].type << " ";
            }
            cout << endl;
        }




        int availableWorkers = 0;
        int availableGoods = 0;


    return 0;
}








