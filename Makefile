run: compile
	makesvac/makesvac

compile: base.o view.o
	mkdir -p makesvac
	g++ -Wall -pedantic -Wno-long-long -O0 -ggdb view.o base.o -o makesvac/makesvac -lncurses

base.o: src/base.cpp
	g++ -c src/base.cpp -o base.o -lncurses

view.o: src/view.h src/view.cpp
	g++ -c src/view.cpp -o view.o -lncurses

doc:
	mkdir -p doc
	doxygen doxygen/config.txt

clean:
	rm -rf makesvac/ base.o view.o
	rm -rf doc/
