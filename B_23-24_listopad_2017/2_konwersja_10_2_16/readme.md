# Konwersja między systemami 10-2 oraz 16-2
### Konwersja z systemu dziesiętnego na dwójkowy
Do manualnej konwersji liczby dziesiętnej na dwójkową stosujemy niniejszy sposób:
- liczbę dziesiętną dzielimy na 2
- zapisujemy wynik poniżej a obok resztę z dzielenia
- dzielenie (za każdym razem przez 2) wykonujemy aż osiągniemy w wyniku dzielenia 0

Przykład:

| Liczba dziesiętna | Dzielimy przez 2 | Reszta (modulo) |
|-------------------|------------------|-----------------|
|122                |:2                |0                |
|61                 |:2                |1                |
|30                 |:2                |0                |
|15                 |:2                |1                |
|7                  |:2                |1                |
|3                  |:2                |1                |
|1                  |:2                |1                |
|0                  |-                 |-                |

Wynik odczytujemy od dołu i w tym przypadku będzie to 122<sub>(10)</sub> = 1111010<sub>(2)</sub>

### Konwersja z systemu dwójkowego na dziesiętny
Przeliczanie z systemu dwójkowego na dziesiętny odbywa się poprzez mnożenie cyfry na danej pozycji z wartością jaką odpowiada przypisana do niej waga. Wagi odpowiadają kolejnym potęgom liczby będącej podstawą systemu (czyli w przypadku systemu binarnego jest to 2) począwszy od potęgi 0 oraz zaczynając od ostatniej liczby.

Przykład:<br>
1111010<sub>(2)</sub> = 1 * 2<sup>6</sup> + 1 * 2<sup>5</sup> + 1 * 2<sup>4</sup> + 1 * 2<sup>3</sup> + 0 * 2<sup>2</sup> + 1 * 2<sup>1</sup> + 0 * 2<sup>0</sup><br>
1111010<sub>(2)</sub> = 64 + 32 + 16 + 8 + 0 + 2 + 0<br>
1111010<sub>(2)</sub> = 122<sub>(10)</sub>


### Konwersja z systemu szesnastkowego na dwójkowy
Konwersja pomiędzy systemami szesnastkowym i dwójkowym jest prosta w realizacji, ponieważ jednej cyfrze szesnastkowej odpowiada 4-cyftrowy zapis w systemie dwójkowym. Kolejnym cyfrom zapisu szesnastkowego odpowiadają kolejne wartości w zapisie dwójkowym:

|Zapis szesnastkowy|Zapis dwójkowy|
|-|-|
|0|0000|
|1|0001|
|2|0010|
|3|0011|
|4|0100|
|5|0101|
|6|0110|
|7|0111|
|8|1000|
|9|1001|
|A|1010|
|B|1011|
|C|1100|
|D|1101|
|E|1110|
|F|1111|

Konwertując liczbę zapisaną w systemie szesnastkowym na liczbę w systemie dwójkowym każdą wartość cyfry szesnastkowej zapisujemy w postaci czterech cyfr zapisu binarnego, np:<br>
1FA0<sub>(16)</sub> = 0001 1111 1010 0000<sub>(2)</sub>

### Konwersja z systemu dwójkowego na szesnastkowy
Niniejsza konwersja przebiega dokładnie na tej samej zasadzie co konwersja opisana powyżej, przy czym każde 4 bity (cyfry) liczby w zapisie dwójkowym odpowiadają jednej cyfrze zapisu szesnastkowego.
Przykład:<br>
1010 0000 0001 1111<sub>(2)</sub> = A01F<sub>(16)</sub><br>
ponieważ:<br>
1010<sub>(2)</sub> = A<sub>(16)</sub><br>
0000<sub>(2)</sub> = 0<sub>(16)</sub><br>
0001<sub>(2)</sub> = 1<sub>(16)</sub><br>
1111<sub>(2)</sub> = F<sub>(16)</sub><br>

Uwaga: zapis dwójkowy o długości innej niż wielokrotność 4 podczas konwersji uzupełniamy z przodu zerami, np:<br>
101111<sub>(2)</sub> = 10 1111<sub>(2)</sub> = 0010 1111<sub>(2)</sub> = 2F<sub>(16)</sub>
