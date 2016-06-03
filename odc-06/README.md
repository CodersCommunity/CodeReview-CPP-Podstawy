#Instrukcja switch case. Menu główne. Kontrola błędów wejścia
Lekcja znajduje się pod linkiem: [LINK](http://forum.pasja-informatyki.pl/126930/cr-c-%236-instrukcja-switch-case-menu-glowne-kontrola-bledow-wejscia)

Zamiany oznaczone jako (P) są moją osobistą preferencją, czyli sam kod jest poprawny.

##Dokonane zmiany
- przeniosłem zmienne globalne do `main` deklarując 1 / linię + deklaracja leniwa
- (P) dodałem znak nowej linii po wykonaiu każdego `cout`
- poprawiłem wcięcia

###`kalkulator_if.cpp`
- poprawiłem wcięcia na mniejsze (nie wiedzieć czemu po ifach wyoru opcji było wcięcie o 1 głebokość za dużo)
- zmniejszyłem dziwne odstępy pomiędzi if/else a wykonywaną instrukcją
- ujednoliciłem styl bloków warunkowych,
- (P) większe bloki kodu umieściłem w klamrach


###`kalkulator_switch.cpp`
- pozbyłem się `exit(0)`, należy tej funkcji unikać! nie pozwala na uruchomienie się destruktorów
- przeniosłem deklarację `char wybor` nad pętlę
- zamieniłem nieskończoną pętlę na bardziej elegancką pętlę *while*
- zamieniłem nagłówki *include* na te zgodne ze standardem C++


###`miesiace_if.cpp`
- (P) zamieniłem nawiasy w złożonych warunkach na odstępy pomiędzy operatorami logicznymi
- ujednoliciłem styl kodu


###`miesiace_switch.cpp`
- usunąłem paskudny `exit(0)`!
- ujednoliciłem zapis (za tak paskudny styl pisania  kodu - tutaj głównie wcięcia - powinny publicznie kamienować)



##Literatura
Dodatkowe warte uwagi materiały
