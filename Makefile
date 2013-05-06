program:
	g++ -Wall -pedantic -Wno-long-long -O0 -ggdb src/base.cpp -o pacman -lncurses

clean:
	rm -f pacman
