# PointerExamples
Some example code for exploring pointers
# Example 1:
  - `int *pi = NULL;` initializes the pointer `pi` to `NULL`, meaning it doesn't point to any valid memory yet.
  - `pi = &x;` assigns the address of the variable `x` to `pi`. Now `pi` points to `x`.
  - `*pi` is the dereferenced value of `pi`, which will output the value of `x` (42).
  - `pi `itself holds the memory address of `x`. This address is displayed in the second cout.
