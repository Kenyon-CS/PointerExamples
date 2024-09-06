#include <iostream>
#include <cmath>  // For sqrt and pow functions
using namespace std;

// Definition of the Point class
class Point {
private:
    int x;
    int y;

public:
    // Constructor to initialize x and y
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Getter for x
    int GetX() const { return x; }

    // Getter for y
    int GetY() const { return y; }

    // Define the equality operator
    bool operator==(const Point &other) const {
        return (x == other.x && y == other.y);
    }

    // Define the distance method
    double DistanceTo(const Point &other) const {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }
};

int main() {
    // Dynamically allocate Point objects
    Point *p1 = new Point(5, 5);
    Point *p2 = new Point(4, 4);
    Point *p3 = new Point(4, 4);  // Same as p2

    // Comparing pointers
    if (p1 == p2) {
        cout << "Error - Point1 should not be equal to Point2" << endl;
    } else {
        cout << "Point1 is not equal to Point2" << endl;
    }

    // Comparing object pointers
    if (p2 == p3) {
        cout << "Point2's pointer is equal to Point3's pointer!" << endl;
    } else {
        cout << "Different pointers" << endl;
    }

    // Comparing the object values
    if (*p2 == *p3) {
        cout << "Point2 pointer is equal to Point3!" << endl;
    } else {
        cout << "Different pointers" << endl;
    }

    // Calculate distances
    double dist1 = p2->DistanceTo(*p1);
    cout << "The distance from Point1 to Point2 is " << dist1 << endl;
    
    double dist2 = p1->DistanceTo(*p2);
    cout << "The distance from Point2 to Point1 is " << dist2 << endl;

    // Clean up dynamically allocated memory
    delete p1;
    delete p2;
    delete p3;

    cout << endl << "END!!!" << endl;

    return 0;
}
