#Pliki tekstowe. Zapis i odczyt z pliku tekstowego
Lekcja znajduje się pod linkiem: [LINK](http://forum.pasja-informatyki.pl/126927/cr-c-%237-pliki-tekstowe-zapis-i-odczyt-z-pliku-tekstowego)

Zamiany oznaczone jako (P) są moją osobistą preferencją, czyli sam kod jest poprawny.

##Dokonane zmiany
- przeniosłem zmienne globalne do funkcji `main` i zadeklarowałem je leniwie
- rozdzieliłem super nieczytelny ciąg instrukcji `cout << ...; cin << ...;` na pojedynczne linie
- ujednoliciłem styl pisania kodu

###`zapis.cpp`
- przy otwarciu pliku dodałem flagę `trunc`, który czyści jego zawartość przy otwieraniu


###`odczyt_wizytowki.cpp`
- (P) zamieniłem warunek `plik.good() == false` na wersję z negacją `!plik.good()`
- w razie niemożliwości wczytania pliku przerywam pracę kodu, dzięki temu w razie braku istnieniea pliku nie będę próbował go odczytać!
- usunąłem zbędną pętlę `while` uproszczając znacznie cały zapis (i tak brane pod uwagę są jedynie 3 ostatnie linie, a łatwo całość zepsuć podając plik, który składa się z niepodzielnej przez 3 liczny linii)


###`quiz.cpp`
- (P) zamieniłem warunek `plik.good() == false` na wersję z negacją `!plik.good()`
- zastąpiłem `exit(0)` przez `return 0`
- zmieniłem kod na konstrukcyjnie prostszy z użyciem pętli *for* (i tak mamy miejsce na raptem 5 elementów); **uwaga!** sam program można napisać dużo lepiej, lepsza wersja na branchu *better code*
- (P) zamieniłem wyrażenie w pętli *for* `i<=4` na `i<5`


###`odczyt.cpp`
- pozbyłem się tablicy odczytów, co jeżeli byłoby ich więcej niż 100? pomijam aspekt marnowania pamięci
- (P) zamieniłem warunek `plik.good() == false` na wersję z negacją `!plik.good()`
- w razie nie istnienia pliku kończę działanie programu
- znacznie uprościłem cały program



##Literatura
Dodatkowe warte uwagi materiały
- [uwagi pod CR](http://forum.pasja-informatyki.pl/126927/cr-c-%237-pliki-tekstowe-zapis-i-odczyt-z-pliku-tekstowego) tutaj szczególnie zachęcam do zajrzenia na komentarze pod CR
- [Podstawy obsługi plików](http://cpp0x.pl/kursy/Kurs-C++/Poziom-4/Podstawy-obslugi-plikow/355)
- [Wczytywanie danych z pliku za pomocą operatora >>](http://cpp0x.pl/kursy/Kurs-C++/Poziom-4/Wczytywanie-danych-z-pliku-za-pomoca-operatora/325)
