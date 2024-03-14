

#ifndef PROJECT2_CELL_H
#define PROJECT2_CELL_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

struct Cell
{
    string type = " ";
    int population =0;
    int pollution=0;
    int radius = 0;
    bool power= false;
    bool used =false;

    void PollInc(){
        pollution++;
    }

    int getPoll() const{
        return pollution;
    }

    int incRadius(){
        radius++;
        return radius;
    }

    int getRadius() const{
        return radius;
    }

};



#endif //PROJECT2_CELL_H
