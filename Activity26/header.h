#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

namespace PointFunctions {
    bool areEqual(const Point& p1, const Point& p2);
    ostream& printPoint(ostream& os, const Point& point);
}

ostream& operator<<(ostream& os, const Point& point);

#endif
