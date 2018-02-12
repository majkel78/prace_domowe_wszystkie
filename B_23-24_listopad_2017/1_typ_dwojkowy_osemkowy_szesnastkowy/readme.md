# Liczbowe typy danych (binarny, ósemkowy, szesnastkowy)

Najpopularniejszym używanym systemem liczbowym jest system dziesiętny. Jest to system pozycyjny o podstawie 10. Konstrukcje liczące (komputery) zapisują informacje w pamięci w postaci bitów. Interpretacja tych informacji notowana jest za pomocą cyfr 0 oraz 1 i jest nazywana zapisem (systemem) binarnym lub dwójkowym. W systemie pozycyjnym używa się też innych systemów, z czego oprócz napopularniejszego dziesiętnego także szesnastkowego i ósemkowego.

### Typ binarny (dwójkowy)
Pozycyjny system liczbowy o podstawie 2. Podstawę jego stanowi liczba 2, wszystkie więc liczby można zapisać dwiema tylko cyframi: 0 i 1. Liczby naturalne w systemie dwójkowym zapisujemy tak samo jak w systemie dziesiętnym - zamiast kolejnych potęg liczby dziesięć, stosujemy kolejne potęgi liczby dwa.

Przykład zapisania liczby dziesiętej 9 w systemie dwójkowym:<br>
1001<sub>(2)</sub> = 1 * 2<sup>3</sup> + 0 * 2<sup>2</sup> + 0 * 2<sup>1</sup> + 1 * 2<sup>0</sup> = 8 + 1 = 9<sub>(10)</sub>

Na potrzeby systemów informatycznych opracowano w systemie dwójkowym sposób reprezentacji liczb ujemnych:
- kod znak-moduł
- kod uzupełnienie do jedności (U1)
- kod uzupelnienie do dwóch (U2) - najczęściej używany

### Typ ósemkowy (oktalny)
Pozycyjny system liczbowy o podstawie 8. Podstawa wynosi 8 więc wszystkie liczby zapisuje się cyframi od 0 do 7. Nazywany jest też systemem "oktalnym" (od słowa octal).

Przykład zapisania liczby dziesiętnej 99 w systemie ósemkowym:<br>
143<sub>(8)</sub> = 1 * 8<sup>2</sup> + 4 * 8<sup>1</sup> + 3 * 8<sup>0</sup> = 64 + 32 + 3 = 99<sub>(10)</sub>

W językach programowania do zapisu liczby w formacie oktalnym (jeżeli język przewiduje wprowadzanie liczb w takim formacie) stosuje się przerostek 0 np. 0143 to zapis ósemkowy liczby dziesiętnej 99. Przykładem wykorzystującym zapis ósemkowy jest polecenie `chmod` (w systemach linux) którym zmienia się uprawnienia do plików (aby ustawić uprawnienia na `rwx r-x r--` stosuje się polecenie `chmod 754 plik`).

### Typ szesnastkowy (heksadecymalny)
Pozycyjny system liczbowy o podstawie 16. Cyfry w tym systemie zapisuje się za pomocą znaków: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F. Cyfry od 0 do 9 mają te same wartości co w systemie dziesiętnym natomiast A, B, C, D, E, F odpowiadają kolejno wartościom 10, 11, 12, 13, 14, 15.

Przykład zapisania liczby dziesiętnej 999 w systemie szesnastkowym:<br>
3E7<sub>(16)</sub> = 3 * 16<sup>2</sup> + 14 * 16<sup>1</sup> + 7 = 768 + 224 + 7 = 999<sub>(10)</sub>

W językach programowania bardzo często używa się zapisu szesnastkowego. Najczęstsze sposoby zapisu to:
- w językach C,C++,C#, Java, Python: prefiks 0x (np. `0x3E7`)
- w języku Pascal prefix $ (np. `$3E7`)
- w asemblerze spotyka się formę za pomocą sufiksa h (np. `3E7h`)
- w HTML/CSS używa się prefiksa # (przykład to wartość koloru - `#FF99A0`)

W systemach informatycznych system szesnastkowy stosuje się między innymi do zapisu koloru (`0xFF0000` oznacza czerwony), adresu sprzętowego MAC (`00:0B:E3:2F:FA:D1`) czy też adresu IPv6 (`2001:db8:85a3:8d3:1319:8a2e:370:7348`).
