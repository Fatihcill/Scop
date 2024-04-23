CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
LDLIBS = -lglfw

# Name of your output
OUTPUT = main

# All .cpp files in this directory are sources
SOURCES = $(wildcard *.cpp)

all: $(OUTPUT)

$(OUTPUT): $(SOURCES)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LDLIBS)

clean:
	rm -f $(OUTPUT)