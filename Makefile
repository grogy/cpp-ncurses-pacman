run: compile
	makesvac/makesvac


compile: game.o base.o view.o model.o
	mkdir -p makesvac
	g++ -Wall -pedantic -Wno-long-long -O0 -ggdb view.o game.o model.o base.o -o makesvac/makesvac -lncurses


game.o: src/controller/game.h src/controller/game.cpp
	g++ -c src/controller/game.cpp -o game.o -lncurses


base.o: src/base.cpp
	g++ -c src/base.cpp -o base.o -lncurses


view.o: src/view/view.h src/view/view.cpp
	g++ -c src/view/view.cpp -o view.o -lncurses


model.o: src/model/model.h src/model/model.cpp
	g++ -c src/model/model.cpp -o model.o -lncurses


doc:
	mkdir -p doc
	doxygen doxygen/config.txt


clean:
	rm -rf makesvac/ base.o view.o game.o
	rm -rf doc/
