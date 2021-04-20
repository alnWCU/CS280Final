#pragma once
#include "types.h"

//of type point
class graph {
    int size;   //amount of vertices
    point randomPoint();
public:
    graph();
    ~graph();
    void addVertex(point p);
    void delVertex(point p);
    int fill(int n);
    //void delVertex(double, double);
    point getRandomVertex();
    void printBFT(point p);
    //void printBFT(double, double);
    void printDFT(point p);
    //void printDFT(double, double);
}
