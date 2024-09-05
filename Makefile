# Makefile for compiling pointer_example

# Compiler
CC = g++

# Compiler flags
CFLAGS = -Wall -g

# Target executable
TARGET = pointer_example

# Default rule to compile the target
all: $(TARGET)

# Rule to link object files and generate the executable
$(TARGET): pointer_example.o
	$(CC) $(CFLAGS) -o $(TARGET) pointer_example.o

# Rule to compile the .cpp file into .o object file
pointer_example.o: pointer_example.cpp
	$(CC) $(CFLAGS) -c pointer_example.cpp

# Clean up object files and the executable
clean:
	rm -f *.o $(TARGET)
