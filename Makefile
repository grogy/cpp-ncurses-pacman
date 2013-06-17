run: compile
	./makesvac


compile: game.o base.o view.o model.o menu.o page.o none.o gamelow.o map.o coin.o
	g++ -Wall -pedantic -Wno-long-long -O0 -ggdb element.o gamelow.o page.o view.o coin.o game.o model.o menu.o base.o wall.o none.o map.o -o makesvac -lncurses


game.o: src/controller/game.h src/controller/game.cpp
	g++ -c src/controller/game.cpp -o game.o -lncurses


base.o: src/base.cpp
	g++ -c src/base.cpp -o base.o -lncurses


view.o: src/view/view.h src/view/view.cpp
	g++ -c src/view/view.cpp -o view.o -lncurses


model.o: src/model/model.h src/model/model.cpp wall.o element.o
	g++ -c src/model/model.cpp -o model.o wall.o element.o -lncurses


none.o: src/model/game-objects/none.h src/model/game-objects/none.cpp
	g++ -c src/model/game-objects/none.cpp -o none.o -lncurses


wall.o: src/model/game-objects/wall.h src/model/game-objects/wall.cpp
	g++ -c src/model/game-objects/wall.cpp -o wall.o -lncurses


element.o: src/model/game-objects/element.h src/model/game-objects/element.cpp
	g++ -c src/model/game-objects/element.cpp -o element.o -lncurses


coin.o: src/model/game-objects/coin.h src/model/game-objects/coin.cpp
	g++ -c src/model/game-objects/coin.cpp -o coin.o -lncurses


menu.o: src/model/menu.h src/model/menu.cpp
	g++ -c src/model/menu.cpp -o menu.o -lncurses


page.o: src/model/page.h src/model/page.cpp
	g++ -c src/model/page.cpp -o page.o -lncurses


map.o: src/controller/map.h src/controller/map.cpp
	g++ -c src/controller/map.cpp -o map.o -lncurses


gamelow.o: src/controller/gamelow.h src/controller/gamelow.cpp
	g++ -c src/controller/gamelow.cpp -o gamelow.o -lncurses


doc:
	mkdir -p doc
	doxygen doxygen/config.txt


clean:
	rm -f makesvac
	rm -f base.o map.o view.o game.o model.o menu.o page.o gamelow.o
	rm -f element.o wall.o none.o coin.o
	rm -rf doc/
