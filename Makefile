run: compile
	makesvac/makesvac

compile:
	mkdir -p makesvac
	g++ -Wall -pedantic -Wno-long-long -O0 -ggdb src/base.cpp -o makesvac/makesvac -lncurses

clean:
	rm -rf makesvac/
