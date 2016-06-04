#10: Wskaźniki. Dynamiczne alokowanie pamięci
Lekcja znajduje się pod linkiem: [LINK](http://forum.pasja-informatyki.pl/127590/cr-c-%2310-wskazniki-dynamiczne-alokowanie-pamieci)

Zamiany oznaczone jako (P) są moją osobistą preferencją, czyli sam kod jest poprawny.

##Dokonane zmiany
- zmienne globalne zostały przeniesione do funkcji `main` (deklarując leniwie)

###`01.cpp`
- (P) zaalokowanie tablicy odbyło się przy utworzeniu wskaźnika
- zamieniłem `NULL` (C style) na zgodne ze standardem C++ `nullptr`

###`02.cpp`
- zamieniłem includy na ich C++'owe odpowiedniki z prefiksem "c"
- (P) zaalokowanie tablicy odbyło się przy utworzeniu wskaźnika

###`03.cpp`
- (P) zastąpłem pojedyczne odwołoania to elementów tablicy `t[i] = ...` przez `float t = {...}`
- (P) przeniosłem znaki nowej linii na koniec `cout`

##Literatura
Dodatkowe warte uwagi materiały
- [Advantages of using nullptr](https://stackoverflow.com/questions/13816385/what-are-the-advantages-of-using-nullptr)
