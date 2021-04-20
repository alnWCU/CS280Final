#include "graph.h"
#include <cstdlib>
#include <ctime>

namespace graph {
    point randomPoint() {
        srand(time(NULL));
        point p;
        p.x = (double) rand()/RAND_MAX;
        p.y = (double) rand()/RAND_MAX;
        return p;
    }

    graph();
    ~graph();
    void addVertex(point p);
    void delVertex(point p);
    int fill(int n) {
        for (int i=0; i<n; i++) {
            addVertex(randomPoint());
        }
        return n;
    }
    //void delVertex(double, double);
    point getRandomVertex();
    void printBFT(point p);
    //void printBFT(double, double);
    void printDFT(point p);
    //void printDFT(double, double);
}
