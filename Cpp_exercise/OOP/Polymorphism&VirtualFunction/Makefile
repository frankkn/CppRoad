CC = g++
OPT = -O3
LIBS = -std=c++17
UDLIBS = CShape.cpp CCircle.cpp CRectangle.cpp

all: main

main: main.cpp
	$(CC) -o a main.cpp $(UDLIBS) $(OPT) $(LIBS)

clean:
	rm -f a
