CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = myprogram

OBJ = main.o details.o printing.o service.o use_system.o generate_bill.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp details.h printing.h service.h use_system.h generate_bill.h
	$(CXX) $(CXXFLAGS) -c main.cpp

details.o: details.cpp details.h
	$(CXX) $(CXXFLAGS) -c details.cpp
printing.o: printing.cpp printing.h
	$(CXX) $(CXXFLAGS) -c printing.cpp
service.o: service.cpp service.h
	$(CXX) $(CXXFLAGS) -c service.cpp
use_system.o: use_system.cpp use_system.h
	$(CXX) $(CXXFLAGS) -c use_system.cpp
generate_bill.o: generate_bill.cpp generate_bill.h
	$(CXX) $(CXXFLAGS) -c generate_bill.cpp
clean:
	rm -f $(OBJ) 
