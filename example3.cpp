#include <iostream>
using namespace std;
// Return a pointer to int created on stack
int* right() {
  int *pn = new int(23);
  return pn;
}
// Return a pointer to int created on heap
int* wrong() {
  int n = 23;
  return &n;
}
int main() {
  // Get an int created in function
  int *p1 = wrong();
  cout << "Wrong: " << *p1 << endl;
  int *p2 = right();
  cout << "Right: " << *p2 << endl;
  
}
