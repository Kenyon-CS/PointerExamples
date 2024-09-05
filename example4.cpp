#include <iostream>
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
};

int main() {
    // Dynamically allocate a Point object with coordinates (5,5)
    Point *p1 = new Point(5, 5);
    cout << "Point1 (x,y) is: (" << p1->GetX() << "," << p1->GetY() << ")" << endl;
    cout << endl;

    // Dynamically allocate another Point object with coordinates (4,4)
    Point *p2 = new Point(4, 4);
    cout << "Point2 (x,y) is: (" << p2->GetX() << "," << p2->GetY() << ")" << endl;
    cout << endl;

    // Clean up dynamically allocated memory
    delete p1;
    delete p2;

    return 0;
}
