program:
	g++ -Wall -pedantic src/base.cpp -o pacman -lncurses


clean:
	rm -f pacman
