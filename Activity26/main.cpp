#include "header.h"
using namespace std;
using namespace PointFunctions;

int main() {
    
    Point point1 = {1, 1};
    Point point2 = {2, 3};
    Point point3 = {1, 1};

    if (areEqual(point1, point2)) {
        cout << "Point1 and Point2 are equal: " << point1 << endl;
    } else {
        cout << "Point1 and Point2 are not equal: " << point1 << " vs " << point2 <<endl;
    }

    if (areEqual(point1, point3)) {
        cout << "Point1 and Point3 are equal: " << point1 << endl;
    } else {
        cout << "Point1 and Point3 are not equal: " << point1 << " vs " << point3 << endl;
    }

    return 0;
}
