// pointer_example.cpp
#include <iostream>
using namespace std;

int main() {
    int *pi = NULL;  // A pointer to an integer, initially set to NULL
    int x = 42;      // An integer variable initialized with the value 42
    pi = &x;         // pi now points to the address of x

    cout << "pi points to value: " << *pi << endl;  // Dereference pi to get the value of x
    cout << "Address stored in pi: " << pi << endl; // Print the address stored in pi

    return 0;
}
