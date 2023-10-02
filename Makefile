CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
SRC_FILES = main.cpp Invoice.cpp
EXECUTABLE = main

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(EXECUTABLE)
