// example2.cpp
#include <iostream>
using namespace std;

int main() {
    // Create an integer on the heap
    int *pi2 = new int;
    *pi2 = 53;

    // Check if the pointer is not NULL
    if (pi2 != NULL) {
        cout << "Value of *pi2: " << *pi2 << endl;  // Outputs 53
    }

    // Delete the memory and avoid dereferencing a deleted pointer
    delete pi2;

    // The next line is unsafe; *pi2 is no longer valid after deletion
    // Uncommenting it will lead to undefined behavior:
    // cout << *pi2 << endl;  // Bad, memory has been freed

    // Set pi2 to NULL after deleting
    pi2 = NULL;

    // Initialize on creation
    int *pi3 = new int(76);  // Creates an integer initialized to 76
    cout << "Value of *pi3: " << *pi3 << endl;  // Outputs 76

    // Clean up the dynamically allocated memory
    delete pi3;
    pi3 = NULL;  // Setting pi3 to NULL after deletion

    return 0;
}
