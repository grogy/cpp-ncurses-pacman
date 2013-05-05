Pacman
======

Obecné zadání
-------------
Hra Pacman dle klasických pravidel, kdy se hráč pohybuje v bludišti a sbírá "tečky". Ve sbírání mu překážejí duchové, kteří se ho snaží chytit. Je zde možnost volby obtížnosti, na které závisí inteligence duchů: tedy je více typů duchů. Např. a) duch, který se pohybuje náhodně; b) duch, který se začne pohybovat za hráčem, pokud ho přímo "uvidí"; c) duch, který se v pravidelném intervalu začne pohybovat přímo za hráčem; apod.

Forma odevzdání semestrální práce
---------------------------------
Odevzdat ve formátu `<login>.zip`. Obsah archivu je následující:

- `zadani.txt` - textový soubor obsahující zadání semestrální práce(soubor musí být v kodování UTF-8),
- `prohlaseni.txt` - cestne prohlaseni, ze jste svoji semestrální práci vypracovali sami (soubor musí být v kódování UTF-8),
- `Makefile` - soubor pro make obsahující instrukce jak semestrální práci přeložit a sestavit (pomocí příkazu make). Obsah souboru Makefile musí být vytvořený ručně autorem semestrální práce (tedy bez použití automatických nástrojů na správu projektů). Soubor Makefile bude využit při pokusném sestavení po odevzdánína Progtestu. Automaticky generované Makefile v sobě mívají absolutní cesty, přepínače specifické pro Vaší platformu, ..., proto na jiném počítači většinou nefungují. V Makefile smí být použity pouze tyto programy: `rm`, `gcc`, `g++`, `mkdir`, `doxygen`, `cp`, `mv`, `cd`, `ar`, `make`.
- Veškeré textové soubory (tedy i zdrojové kódy) musí mít [unixové konce řádků](http://en.wikipedia.org/wiki/Newline).

Dále archiv obsahuje následující adresářovou strukturu:
- Adresář `<login>/src` ve kterém budou všechny zdrojové kódy, tedy soubory `.cpp`, `.c`, `.h`, `.hpp`, apod.
- Adresář `<login>/examples` zde budou obsaženy ukázkové vstupní soubory, pokud to charakter úlohy dovoluje.
