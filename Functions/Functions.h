//
// Created by Dorothy Ntende on 3/14/24.
//

#ifndef PROJECT2_FUNCTIONS_H
#define PROJECT2_FUNCTIONS_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "../Main/Cell.h"
using namespace std;

void OpenFile(ifstream &fin, string &filename, int &Timesteps, int &Refreshrate,  vector<string> &fileplaceholdervalues);
void GetRowsAndColumns(vector<vector<Cell> >&region, ifstream& regionfile,string &line,int &numRows, int &maxCols,string &filename);

#endif //PROJECT2_FUNCTIONS_H
