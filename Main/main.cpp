#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Cell.h"
#include "../Functions/Functions.h"

using namespace std;

int calculateAdjacentPopulation(int x, int y, vector<vector<Cell> > &region);
void GrowCell(Cell &cell, int &availableWorkers, int &availableGoods);
void SimulateTimeStep(vector<vector<Cell> > &region, int &availableWorkers,int &availableGoods);






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
     vector<string> fileplaceholder;
     OpenFile(fin,filename,TimeSteps,RefreshRate,fileplaceholder);
     cout << "filename: " <<filename << endl;
     cout << "Timelimit: " << TimeSteps << endl;
     cout << "Refreshrate: " << RefreshRate << endl;
     vector<vector<Cell> >date,copy ;
     ifstream regionfile;
        string line;
        int numRows = 0;
        int maxCols = 0;
        string filename2;
        vector<vector<Cell> > region;
        GetRowsAndColumns(region,regionfile,line,numRows,maxCols,filename);


cout << "initial region\n";


        for(int i=0; i<region.size(); i++)
        {
            for(int j=0; j<region[i].size(); j++)
            {
                int population = calculateAdjacentPopulation(i,j,region);
                if(population ==0)
                {
                    cout << region[i][j].type << " ";
                }
            }
            cout << endl;
        }

        int availableWorkers = 0;
        int availableGoods = 0;
        for(int timeStep =1; timeStep <= TimeSteps; timeStep++)
        {
            SimulateTimeStep(region,availableWorkers,availableGoods);
            if(timeStep%RefreshRate==0)
            {
                cout << "Time Step: " << timeStep << endl;
                for(int i=0; i<region.size(); i++)
                {
                    for(int j=0; j<region[i].size(); j++)
                    {
                        int population = calculateAdjacentPopulation(i,j,region);
                        if(population ==0)
                        {
                            cout << region[i][j].type << " ";
                        }
                    }
                    cout << endl;
                }
            }
        }

    return 0;
}

int calculateAdjacentPopulation(int x, int y, vector<vector<Cell> > &region)
{
    int totalPopulation =0;
    for(int i =max(0,x-1); i<=min(x+1,(int)region.size()-1); i++)
    {
        for(int j =max(0,y-1); j<=min(y+1,(int)region[i].size()-1); j++)
        {
            if(i!=x || j!=y)
            {
                totalPopulation += region[i][j].population;
            }
        }
    }
    return totalPopulation;
}
void GrowCell(Cell &cell, int &availalbeWorkers, int &availableGoods)
{
    if(cell.type=="C"&& availableGoods > 0)
    {
        cell.population++;
        availableGoods--;
    }
    else if(cell.type=="I" && availalbeWorkers > 0)
    {
        cell.population++;
        availalbeWorkers--;
    }
}
void SimulateTimeStep(vector<vector<Cell> > &region, int &availableWorkers,int &availableGoods)
{
    vector<vector<Cell> > NewRegion = region;
    for(int i=0; i<region.size(); i++)
    {
        for(int j=0; j<region[i].size(); j++)
        {


                GrowCell(NewRegion[i][j],availableWorkers,availableGoods);

        }
    }
    region = NewRegion;
}



