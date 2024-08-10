CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

# Name of the final executable
TARGET = soldiers_manager

# Rule to create the final executable
$(TARGET): main.o
	$(CXX) $(CXXFLAGS) -o $@ main.o

# Rule to compile all source files into a single object file
main.o: main.cpp Soldiers.cpp Infantry.cpp Boatman.cpp ShieldBearer.cpp InfantryFactory.cpp BoatmanFactory.cpp ShieldBearerFactory.cpp SoldiersManager.cpp Memento.cpp CareTaker.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

# Rule to clean up build files
clean:
	rm -f main.o $(TARGET)
