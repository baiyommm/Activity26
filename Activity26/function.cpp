#include "header.h"

namespace PointFunctions {
    bool areEqual(const Point& p1, const Point& p2) {
        return p1.x == p2.x && p1.y == p2.y;
    }

    ostream& printPoint(ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }
}

ostream& operator<<(ostream& os, const Point& point) {
    return PointFunctions::printPoint(os, point);
}
