# Makefile for compiling pointer_example

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -g

# Target executable
TARGET = example1

# Default rule to compile the target
all: $(TARGET)

# Rule to link object files and generate the executable
$(TARGET): example1.o
	$(CC) $(CFLAGS) -o $(TARGET) example1.o

# Rule to compile the .cpp file into .o object file
example1.o: example1.cpp
	$(CC) $(CFLAGS) -c example1.cpp

# Clean up object files and the executable
clean:
	rm -f *.o $(TARGET)
