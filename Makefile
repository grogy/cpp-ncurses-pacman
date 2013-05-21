run: compile
	makesvac/makesvac


compile: game.o base.o
	mkdir -p makesvac
	g++ -Wall -pedantic -Wno-long-long -O0 -ggdb game.o base.o -o makesvac/makesvac -lncurses


game.o: src/presenter/game.h src/presenter/game.cpp
	g++ -c src/presenter/game.cpp -o game.o -lncurses


base.o: src/base.cpp
	g++ -c src/base.cpp -o base.o -lncurses


view.o: src/view.h src/view.cpp
	g++ -c src/view.cpp -o view.o -lncurses


doc:
	mkdir -p doc
	doxygen doxygen/config.txt


clean:
	rm -rf makesvac/ base.o view.o game.o
	rm -rf doc/
