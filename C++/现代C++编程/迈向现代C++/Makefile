C = gcc
CXX = g++

SOURCE_C = foo.c
OBJECTS_C = foo.o

SOURCE_CXX = 1.1.cpp

TARGET = 1.1.exe

# C 编译器选项
CFLAGS = 

# C++ 编译器选项，包括 -std=c++2a
CXXFLAGS = -std=c++2a

all: $(TARGET)

$(TARGET): $(OBJECTS_C)
	$(CXX) $(SOURCE_CXX) $(OBJECTS_C) $(CXXFLAGS) -o $@

$(OBJECTS_C): $(SOURCE_C)
	$(C) -c $(SOURCE_C) $(CFLAGS)

clean:
	del *.o $(TARGET)
