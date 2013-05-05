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
V jednotlivých složkách (src, examples) může být adresářová struktura libovolná.

Archiv nesmí obsahovat žádný soubor, který lze vygenerovat ze zdrojových souborů. Zejména soubory: *.o, *.lib, *.so, přeloženou (binární) formu semestrální práce, apod. 

Detailní pokyny pro vytvoření souboru Makefile
----------------------------------------------
tedy při napsání:

- make all nebo make vytvoří veškeré výstupy, generované ze zdrojového kódu.
- make compile vytvoří binární podobu semestrální práce, výsledek bude uložen do souboru <login>/<login>.
- make run spustí binární podobu semestrální práce.
- make clean smaže všechny vygenerované soubory a uvede adresář <login> do původního stavu.
- make doc vytvoří dokumentaci do adresáře <login>/doc. Dokumentaci musíte vytvořit pomocí programu doxygen, berte to jako výhodu a zkuste dokumentaci uplatnit v předmětu TED. Dokumentaci můžete vygenerovat POUZE v HTML (tedy ne pdf/latex).

Archiv navíc musí obsahovat obrázek popisující vztahy mezi Vámi vytvořenými třídami. Na obrázku musí být zachyceno jaká třída dědí od jaké, spolupráce mezi třídami apod. Cílem tohoto obrázku je usnadnění „přečtení“ kó6du. Obrázek nemusí být přimo UML diagram, ale musí na něm být jasné co je co, případně popis použité notace může být ve dalším souboru. Tento obrázek by měl být vygenerován doxygenem.

Překlad a spuštění semestrální práce
------------------------------------
Překlad semestrální práce bude prováděn pomocí příkazu make compile (pracovní adresář je adresáře kde je umístěn soubor Makefile). Spuštění práce bude prováděno příkazem make run. Pokud jeden z těchto příkazů skončí chybou, práce je automaticky ohodnocena 0 body. Semestrální práce budou testovány na virtualním image. Veškeré C/C++ soubory musí být překládány s následujícími volbami překladače:

`-Wall -pedantic -Wno-long-long -O0 -ggdb`

 Použití dalších voleb je povolené, uvedené volby jsou však povinné.

Velmi doporučuji si před odevzdáním práce vyzkoušet následující sekvenci příkazů (předpokládejme, že chcete odevzdat semestrální práci v souboru `vranyj1.zip`):

`$ unzip vranyj1.zip`

`$ cd vranyj1`

`$ make compile`

`$ make run`

V této sekvenci příkazů by neměla nastat chyba (pokud nastane, vaše semestrální práce bude hodnocena 0 body). 

 Pro tvorbu semestrálních prací jsou povoleny POUZE následující knihovny:

- libncurses verze 5.7 (jen vyjimečně, nestačí-li jen řádkový mod znakového terminálu)
- standartní knihovny C++, C a systému.
- V případě, že nechcete programovat vrstvu síťové komunikace, je povoleno stáhnout kousek programu, který použijete ve své semestrální práci. Tento kousek programu musí být jednoznačně označen: v záhlaví musí být html odkaz a upozornění, že se jedná o stažený(é) soubor/funkce/metody. Jedná se opravdu o kousek programu, který budete zakompilovávat do své semestrální práce(řekněme do 300 řádek). Nikoliv o celou knihovnu !!!
- K dispozici máte ukázku jednoduchého programu, který otevírá [TCP spojení](https://edux.fit.cvut.cz/courses/BI-PA2/_media/ukazka_tcp.tgz).


Požadavky na zdrojový kód
-------------------------
Krom toho, že kód se musí chovat správně a být „slušně“ napsaný, musí splňovat následující požadavky:

- zdrojový kód musí být rozdělen do souborů po logických celcích,
- musí být přehledně zarovnán,
- musí být smysluplně komentován,
- veškeré názvy stejně jako komentáře musí být v v anglickém jazyce.
- rozsah semestrální práce je 1000-3000 řádek, jakákoliv semestrální práce mající méně než 1000 řádek BUDE ZAMÍTNUTA !!!!. 1000 řádků opravdu není mnoho. Počet řádků se počítá pomocí příkazu `wc -l <soubory>`, tzn. počítají se do toho i komentáře. Komentáře musí být v rozumném množství. Předem upozorňuji, že semestrální práce obsahující hodně řádků s komentářem může být zamítnuta.
- Požadavky na kód, respektive na minimální „technologii“ kterou bude kód používat: objektově orientované rysy C++ a velmi jednoduchý polymorfismus. Příklad: ve hře máte dvě postavy a) hráč; b) příšera. Vytvořím třídu moving_object a od ní podědí dva potomci: a) hráč; b) příšera. moving_object pochopitelně má metody typu: posuň s tam a tam, apod.

Přidělené zadání semestrální práce je orientační. To znamená: text zadání má vymezit téma. Primární je napsat program v požadovaném rozsahu 1000-3000 řádek jehož minimální funkcionalita je daná zadáním. 

Poznámky k hodnocení
--------------------
Nedodržení kteréhokoli uvedených požadavků automaticky vede k neúspěšnému hodnocení při obhajobě. Naopak jejich 100% dodržení neznamená automaticky úspěch při obhajobě. Bodové hodnocení bude záviset na kvalitě odevzdaného kódu. Pochopitelně při obhajobě práce musí student prokázat, že ji vypracoval samostatně, tj. musí umět vysvětlit cokoli v práci.

Každá semestrální práce musí být obhájena při zkoušce, viz. Hodnocení.

Opravující semestrální práce bude u kódu sledovat například (a nejen) tyto věci:

- chybná práce s pamětí (zápis+memory leaky, apod.)
- opakující se kód
- velmi mnoho do sebe vnořených bloků
- nepouživání konstant pro signalizaci chyb/stavu, apod.
- nezarovnaný kód
- veřejné datové položky a přístup k nim
- natvrdo zadrátované soubory/vstupní parametry/.. které by měly být specifikované v konfiguraci nebo na příkazové řádce
- velké množství warningů při kompilaci
- nepoužívání const u metod a u parametrů

Výčet požadavků na kód NENÍ A NEMŮŽE BÝT ÚPLNÝ.