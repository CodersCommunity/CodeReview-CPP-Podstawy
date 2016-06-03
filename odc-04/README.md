#Liczby losowe (pseudolosowe)
Lekcja znajduje się pod linkiem: [LINK](http://forum.pasja-informatyki.pl/126490/cr-c-%234-liczby-losowe-pseudolosowe)

Zamiany oznaczone jako (P) są moją osobistą preferencją, czyli sam kod jest poprawny.

##Dokonane zmiany
###`lotto.cpp`
- zamieniłem nagłówki na te zgodne ze standardem c++, czyli wersje rozpoczynające się prefiksem "c" bez rozszerzenie ".h", np "time.h" na "ctime"
- przeniosłem globalną zmienną `liczba` do funkcji `main`
- (P) przeniosłem koniec linii tworzony po pierwszym sleepie do tej samej linii co komunikat

###`zgadula.cpp`
- zamieniłem nagłówki na te zgodne ze standardem c++, czyli wersje rozpoczynające się prefiksem "c" bez rozszerzenie ".h", np "time.h" na "ctime"
- przeniosłem zmienne globalne do `main` deklarując je leniwie
- przypisałem wartość początkową zmiennej `strzal`, użycie jej bez przypisania wiąże się ze sprawdzeniem śmieci w pierwszym wykonaiu pętli *while*, to jest błąd!
- usunąłem blok `getchar`, który jest zupełnie niepotrzebny
- usunąłem warunek przy ostanim `else if`, bo to jest logiczne jeżeli *a nie jest równe b, ani a nie jest od niego mniejsze, to MUSI być większe*


##Literatura
Dodatkowe warte uwagi materiały
