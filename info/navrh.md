Návrh - myšlenkový pochod
=========================

Vykreslování
------------
- vytvořit třídu / sadu tříd, které budou obalovat základ ncurses (které je jen ve funkcích) a bude tedy poskytovat objektovou obálku pro práci s grafikou
- vykreslování řešit přes matici (asi char, 2^8 by mělo stačit v pohodě)
- jednotlivé prvky matice (tedy hodnoty charu) by měly prezentovat jednotlivé znaky, co se budou tisknout
- jednotlivé znaky prezentovat pomocí konstant, aby se prvky při vykreslování mohly měnit podle potřeby
- vykreslovat pouze změněné prvky - nebo ne?

Návrh tříd
----------
- View (vykreslování)
  - Constant (konstanty pro reprezentaci jednotlivých prvků matice)
  - Screen (obalové metody pro ncurses)
- Logic (logika hry)
  - Matrix (matice, která se bude zasílat do View, kde se vykreslí)
  - ..
