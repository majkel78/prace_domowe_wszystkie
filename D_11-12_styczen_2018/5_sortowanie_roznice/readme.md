## Sortowanie: bąbelkowe, przez wstawianie, przez wybieranie.

### 1. Sortowanie bąbelkowe (bubble sort)

Jest to prosta metoda sortowania, polegająca na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności,
jeżeli ich porządek nie jest zgodny z porządkiem sortowanej tablicy. Sortowanie kończy się, gdy podczas kolejnego
przejścia nie dokonano żadnej zmiany.

Przykład:
```
tablica: 4,3,7,1
para: 4,3 => zamiana na 3,4
tablica: 3,4,7,1
para: 4,7 => bez zamiany
tablica: 3,4,7,1
para: 7,1 => zamiana na 1,7
tablica: 3,4,1,7
od początku:
para: 3,4 => bez zamiany
tablica: 3,4,1,7
para: 4,1 => zamiana na 1,4
tablica: 3,1,4,7
para: 4,7 => bez zamiany
od początku:
para: 3,1 => zamiana na 1,3
tablica: 1,3,4,7
para: 3,4 => bez zamiany
tablica: 1,3,4,7
para: 4,7 => bez zamiany
tablica 1,3,4,7
tablica posortowana
```

### 2. Sortowanie przez wstawianie (insertion sort)

Jeden z najprostszych algorytmów sortowania, którego zasada działanmia opiera się na sposobie w jaki ludzie
ustawiają karty - kolejne elementy wejściowe są wstawiane na odpowiednie miejsca docelowe.
```
Algorytm:
1. Utwórz zbiór elementów posortowanych i przenieś do niego dowolny element ze zbioru nieposortowanego.
2. Weź element ze zbioru nieposortowanego.
3. Porównuj go z elementami ze zbioru posortowanego dopóki nie napotkasz elementu równego lub większego.
4. Wstaw niniejszy element w miejsce gdzie skończyło się porównywanie z pkt.3
5. Jeśli zbiór nieposortowany nie jest pusty, wróć do pkt.2
```

### 3. Sortowanie przez wybieranie (selection sort)

Sortowanie przez wybieranie to jedna z prostszych metod sortowania.
Polega na wyszukaniu elementu mającego się znaleźć na żądanej pozycji i zamianie miejscami z tym,
który jest tam obecnie. Operacja jest wykonywana dla wszystkich indeksów sortowanej tablicy.

Algorytm przedstawia się następująco:
```
- wyszukaj minimalną wartość z tablicy spośród elementów od i do końca tablicy
- zamień wartość minimalną, z elementem na pozycji i
```
Gdy zamiast wartości minimalnej wybierana będzie maksymalna, wówczas tablica będzie posortowana
od największego do najmniejszego elementu.

### 4. Porównanie w/w algorytmów sortujących.

Z wymienionych 3 algorytmów algorytm poprzez wstawianie wymaga zarezerwowania dodatkowej pamięci na tablicę posortowaną.
Czasami wstawienie elementu z przodu tablicy, kiedy została część posortowana jest już dość duża wymaga przekopiowania
sporej ilości komórek o 1 pozycję w prawo.
Algorytm bąbelkowy oraz poprzez wybieranie operują na tym samym obszarze pamięci co tablica nieposortowana.
Są też podobne do siebie, przy czym: 
- algorytm bąbelkowy porównuje za każdym razem dwa elementy obok siebie oraz zamienia
je ze sobą, kiedy istnieje taka potrzeba, 
- algorytm poprzez wybieranie szuka najmniejszego elementu i zamienia go z kolejnym elementem z przodu tablicy, w zależności
od numeru przejścia przez tablicę.
