bin/main: src/main.cpp $(patsubst lib/%.cpp, build/%.o, $(wildcard lib/*))
	g++ -std=c++17 -I include -o $@ $^

build/%.o: lib/%.cpp include/%.h
	g++ -std=c++17 -I include -c $< -o $@
