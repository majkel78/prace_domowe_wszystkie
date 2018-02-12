## Dlaczego dla preprocesingu w języku C używamy nadmiarowych nawiasów?

Kompilatory C/C++ przed właściwą kompilacją przetwarzają kod przez tzw. preprocesor. Instrukcje preprocesora to wszystkie linie zaczynające się od znaku #. Jedną z takich instrukcji jest:
```c
#define STAŁA WARTOŚĆ
```
Umożliwia ona zamianę wszystkich wystąpień ustalonej nazwy zdefiniowanym ciągiem znaków, np:
```c
#define MAX 5
printf("Wykonam petle %d razy\n",MAX);
for(int a=0;a<MAX;a++) {printf("%d\n",a);}
```
przed właściwą kompilacją zamieni kod na:
```c
printf("Wykonam petle %d razy\n",5);
for(int a=0;a<5;a++) {printf("%d\n",a);}
```
Konstrukcją ```#define``` można także definiować wartości z wykorzystaniem parametrów, np:
```c
#define DODAJ(A,B) A+B
printf("Wynik dodawania = %d",DODAJ(3,5));
```
Powyższy przykład ilustruje jak działa konstrukcja ```#define```, aczkolwiek niniejszy zapis powinien być uzupełniony o nawiasy:
```c
#define DODAJ(A,B) ((A)+(B))
```
Jest to konieczne do uniknięcia nieprzewidzianych sytuacji związanych z priorytetem operatorów. Przykład:
```c
// zła deklaracja
#define DODAJ(A,B) A+B
printf("Wynik = %d",DODAJ(3,5)*4);
// chcemy otrzymać 32, a otrzymamy 23, ponieważ preprocesor zamieni to na:
// printf("Wynik = %d",3+5*4);
// a podczas obliczania wyrażeń mnożenie ma większy priorytet od dodawania

// prawidłowa deklaracja
#define DODAJ(A,B) ((A)+(B))
printf("Wynik = %d",DODAJ(3,5)*4);
// otrzymamy teraz prawidłowy wynik 32
// ponieważ preprocesor zamieni to na:
// printf("Wynik = %d",((3)+(5))*4);
