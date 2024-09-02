CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = myprogram

OBJ = main.o details.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp details.h
	$(CXX) $(CXXFLAGS) -c main.cpp

details.o: details.cpp details.h
	$(CXX) $(CXXFLAGS) -c details.cpp

clean:
	rm -f $(OBJ) $(TARGET)
