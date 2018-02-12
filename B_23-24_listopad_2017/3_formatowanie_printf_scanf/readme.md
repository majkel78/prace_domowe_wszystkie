# Formatowanie printf()/scanf()
Funkcje języka C printf() oraz scanf() używają specjalnych kodów (tagów) do wyświetlania zawartości przekazanych zmiennych lub interpretacji ciągu znaków w celu wpisania ich do zmiennej. Ogólna budowa wygląda następująco:
```%[flagi][szerokość][.precyzja][rozmiar]specyfikator_typu```

Przykłady:
```c
printf("Zmienna a = %d",a); // wypisanie wartości zmiennej "a" w postaci dziesiętnej
scanf("%d",&a);             // pobranie od użytkownika wartości w formacie dziesiętnym i wpisaniem jej do zmiennej "a"
```

Specyfikator jest wymagany. Pozostałe parametry (flagi, szerokość, precyzja, rozmiar) są opcjonalne.

Tabela kodów (specyfikatorów):

|Specyfikator|Typ argumentu|Przykład|
|-|-|-|
|%d|liczba całkowita ze znakiem (format dziesiętny)|1234|
|%i|j.w.|1234|
|%u|liczba całkolwita bez znaku (format dziesiętny)|4096|
|%o|liczba w systemie ósemkowym (oktalnym)|774|
|%x|liczba w systemie szesnastkowym (małe litery)|1ffa|
|%X|liczba w systemie szesnastkowym (duże litery)|1FFA|
|%f|liczba rzeczywista (typ: float lub double), wynik dziesiętny|12.54300|
|%e|liczba w notacji naukowej (ze znakiem e)|2.123e+2|
|%E|liczba w notacji naukowej (ze znakiem E)|2.123E+2|
|%g|liczba rzeczywista w notacji %e bądź %f. Notacja naukowa jest używana tylko wtedy gdy wykładnik jest mniejszy od -4 lub gdy wykładnik jest większy albo równy od parametru precyzja|3.12|
|%c|znak|w|
|%s|ciąg znaków zakończony znakiem \0|World|
|%p|adres w pamięci|A600:2000|

Flagi:

|flaga|opis|
|-|-|
|-|	Wyrównaj wypisywane dane do lewej. Pozycja jest ustalana na podstawie parametru szerokość oraz na podstawie długości tekstu wyjściowego. Domyślnie tekst jest wyrównywany do prawej.|
|+|	Poprzedza wynik znakiem + lub - jeżeli wartość wyjściowa jest liczbą całkowitą ze znakiem. Domyślnie tylko liczby ujemne są poprzedzone znakiem -.|
|0|	Jeżeli parametr szerokość jest poprzedzony 0, znaki 0 są wstawiane dopóki minimalna długość tekstu wyjściowego nie zostanie osiągnięta.|
|(spacja)|	Poprzedza wartość wyjściową jedną spacją jeżeli jest to liczba nieujemna. Flaga ta jest ignorowana gdy w tagu wystąpiła flaga +.|
|#|	Jeżeli flaga zostanie użyta razem ze specyfikatorami o, x, lub X to wynik, który jest niezerowy zostanie poprzedzony 0, 0x lub 0X odpowiednio do typów.<br><br>Jeżeli flaga zostanie użyta razem ze specyfikatorami e, E lub f to na wyjściu zostanie wymuszone pojawienie się separatora oddzielającego część całkowitą od ułamkowej. Domyślnie, po wartości całkowitej nie jest wypisywany separator oddzielający (domyślnie jest nim kropka).<br><br>Jeżeli flaga zostanie użyta ze specyfikatorami g lub G to na wyjściu zostanie wymuszone pojawienie się separatora oddzielającego część całkowitą od ułamkowej oraz zapobiegnie ucięciu zer końcowych.<br><br>Flaga jest ignorowana gdy zostanie użyta z następującymi specyfikatorami typów: c, d, i , u lub s. |

Szerokość:

|Szerokość|	Opis|
|-|-|
|(liczba)|	Minimalna liczba znaków do wyświetlenia. Jeżeli liczba wyświetlanych znaków jest mniejsza niż podana wartość to wynik będzie uzupełniony spacjami. Wartość nie zostanie obcięta jeżeli wynik jest dłuższy niż wartość podana.|
|*|	Szerokość nie jest określona przez tekst sformatowany. Długość tekstu określa się natomiast poprzez argument będący liczbą, który musi wystąpić bezpośrednio przed wypisywaną wartością.|

Przykład użycia *:
```c
printf( "%*g", 20, 123.0 );
//Powyższy zapis równoważny jest poniższemu:
printf( "%20g", 123.0 );
```

Precyzja:

|.precyzja|	opis|
|-|-|
|.liczba|	Dla specyfikatorów typów całkowitych tj. d, i, o, u, x oraz X precyzja określa minimalną liczbę cyfr jaka ma zostać wyświetlona. Jeżeli liczba cyfr jest mniejsza od podanej wartości to liczba zostanie uzupełniona zerami wiodącymi. Liczba nie zostanie ucięta jeżeli liczba będzie dłuższa niż podana wartość. Jeżeli długość precyzji będzie wynosiła 0 oraz wartość, która ma zostać wypisana będzie wynosiła 0 to nic nie zostanie wypisane na ekran. Jeżeli nie określono precyzji, domyślną wartością dla wymienionych powyżej typów jest 1.<br><br>Dla specyfikatorów typów e, E oraz f precyzja jest maksymalną liczbą cyfr po przecinku jaka ma zostać wypisana.<br><br>Dla specyfikatorów typów g i G precyzja oznacza maksymalną liczbę cyfr do wyświetlenia.<br><br>Dla specyfikatora s precyzja oznacza maksymalną liczbę znaków jaka może zostać wypisana z łańcucha znaków. Domyślnie wszystkie znaki z łańcucha znaków są wypisywane aż do napotkania znaku terminalnego '\0'.<br><br>Dla specyfikatora typu c precyzja nie ma żadnego efektu.|
|.*|	Precyzja nie jest określona przez tekst sformatowany. Precyzję określa się natomiast poprzez argument będący liczbą, który musi wystąpić bezpośrednio przed wypisywaną wartością.|

Rozmiar:

|Rozmiar|	opis|
|-|-|
|h|	Argument jest interpretowany jako short int lub unsigned short int (dotyczy tylko specyfikatorów liczbowych, tj. i, d, u, o, x oraz X).|
|l|	Argument jest interpretowany jako long int lub unsigned long int dla specyfikatorów określających argumenty liczbowe tj. i, d, o, u, x oraz X.<br><br>Parametr ten stosuje się również do wypisywania znaku unikodowego jak i unikodowego łańcucha znaków stosowanych odpowiednio dla specyfikatorów c i s.|
|L|	Argument jest interpretowany jako long double (dotyczy tylko specyfikatorów określających zmiennoprzecinkowe argumenty: f, e, E, g oraz G).|


# 4. Program obliczający liczbę z ciągu Fibonacciego

*Ciąg Fibonacciego* jest to ciąg liczb naturalnych, gdzie każda kolejna liczba jest sumą dwóch poprzednich.<br>
Poniżej zaprezentowany jest program który oblicza i wyświetla liczbę Fibonacciego na konkretnej pozycji (podanej przez użytkownika).
Algorytm polega wykonywaniu pętli w której wyznacza się sumę dwóch poprzednio wyznaczonych liczb (sum).
Pętla wykonuje się taką ilość razy, aby dojść do zadanej przez użytkownika pozycji w ciągu.
Ze względu na ograniczenie liczbowe zmiennej ```unsigned long``` program umożliwia obliczenie maksylanie do 92 liczby Fibonacciego.

```c
#include <stdio.h>

int main() {

    unsigned long int liczba_kolejna;
    unsigned long int licznik;
    unsigned long int wynik = 0;
    unsigned long int poprzednia1=0;	// zmienne do przechowywania poprzednich liczb w kolejnosci:
    unsigned long int poprzednia2=1;	// poprzednia1, poprzednia2, liczba_kolejna

    printf("Podaj wartosc calkowita dla ktorej mam obliczyc liczbe Fibonacciego, n = ");
    scanf(" %ld", &liczba_kolejna);

    if (liczba_kolejna <= 92)
    {
		if(liczba_kolejna<2)
			wynik=liczba_kolejna;
		else
		{
			for (licznik = 2; licznik <= liczba_kolejna; licznik++)
			{
				wynik = poprzednia1+poprzednia2;
				poprzednia1=poprzednia2;			// poprzednia1=liczba_kolejna(-2) bedzie tym czym byla liczba_kolejna(-1)
				poprzednia2=wynik;					// poprzednia2=liczba_kolejna(-1) bedzie tym czym byla liczba_kolejna(0)
			}
        }

        printf("\nLiczba Fibonacciego (%ld): %ld\n", liczba_kolejna, wynik);

    }
    else
    {
        printf("Za duza wartosc n, n <= 92\n");
    }

    return 0;
}
```

