//
// Michał Jarzyński SSINF2017 grupa 2
// program do obliczania sinusa z użyciem szeregu Taylora
//
// parametry podczas wywoływania: wartość X dla sin(X) (0-2*pi)
//

#include <stdio.h>
#include <stdlib.h>

#define DOKLADNOSC 50

int main(int liczba_slow, char* tablica_slow[]){
	double x;
	double wynik = 0.0;
	double silnia = 1.0;
	double potega_x = 1.0;

	if(liczba_slow == 2){
		x = atof(tablica_slow[1]);
		for(int licznik = 1; licznik < DOKLADNOSC*2; ++licznik){
			potega_x *= x;
			silnia *= licznik;
			
			// podliczenie (+/-) dla potęg nieparzystych
			if(((licznik+1)%4)==0)		// dla licznik 3,7,11...
				wynik -= potega_x / silnia;
			else if(((licznik-1)%4)==0)		// dla licznik 1,5,9,...
				wynik += potega_x / silnia;
				
		}
		printf("Wynik: %lf\n", wynik);
	}else{
		printf("Niepoprawna liczba parametrow!\n");
	}

	return 0;
}
