run: compile
	./makesvac


compile: game.o base.o view.o model.o menu.o
	g++ -Wall -pedantic -Wno-long-long -O0 -ggdb element.o view.o game.o model.o menu.o base.o -o m0akesvac -lncurses


game.o: src/controller/game.h src/controller/game.cpp
	g++ -c src/controller/game.cpp -o game.o -lncurses


base.o: src/base.cpp
	g++ -c src/base.cpp -o base.o -lncurses


view.o: src/view/view.h src/view/view.cpp
	g++ -c src/view/view.cpp -o view.o -lncurses


model.o: src/model/model.h src/model/model.cpp wall.o element.o
	g++ -c src/model/model.cpp -o model.o wall.o element.o -lncurses


wall.o: src/model/game-objects/wall.h src/model/game-objects/wall.cpp
	g++ -c src/model/game-objects/wall.cpp -o wall.o -lncurses


element.o: src/model/game-objects/element.h src/model/game-objects/element.cpp
	g++ -c src/model/game-objects/element.cpp -o element.o -lncurses


menu.o: src/model/menu.h src/model/menu.cpp
	g++ -c src/model/menu.cpp -o menu.o -lmenu -lncurses


doc:
	mkdir -p doc
	doxygen doxygen/config.txt


clean:
	rm -f makesvac base.o view.o game.o model.o element.o wall.o
	rm -rf doc/
