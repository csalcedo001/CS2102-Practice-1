all: run

%.o: %.cpp
	g++ -std=c++17 $< -o $@

run: 3n.o
	./$<
