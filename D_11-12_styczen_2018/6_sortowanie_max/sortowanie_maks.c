//
// Michał Jarzyński SSINF2017 grupa 2
// program do sortowania poprzez wyszukiwanie maksymalnej wartości
//

#include <stdio.h>

// rozmiar tablicy
#define ROZMIAR 10

// wyświetlenie tablicy
void wyswietl(int* tablica)
{
	int i;
	for(i=0;i<ROZMIAR;i++)
	{
		printf(" %d",tablica[i]);
	}
	printf("\n");
}

// funkcja sortująca tablicę
void posortuj(int* tablica)
{
	int max;		// odnaleziona maksymalna wartość
	int max_index;	// indeks maksymalnej wartości
	int i,j,tmp;	// zmienne pomocnicze

	for(i=ROZMIAR;i>0;i--)
	{
		max=tablica[0];			// pobieramy pierwszy element z tablicy jako "max"
		max_index=0;			// indeks pierwszego elementu
		for(j=1;j<i;j++)		// pętla przeszukująca tablicę w poszukiwaniu
		{						// .. największego elementu
			if(tablica[j]>max)
			{
				max=tablica[j];
				max_index=j;
			}
		}
		tmp=tablica[i-1];		// zamiana odnalezionego elementu z ostatnim
		tablica[i-1]=max;		// ... w niniejszej pętli
		tablica[max_index]=tmp;
	}
}

// funkcja główna
int main(){
	int tablica[ROZMIAR]={7,4,0,2,3,1,9,5,8,6};
	
	printf("tablica przed posortowaniem: ");wyswietl(tablica);
	posortuj(tablica);
	printf("    tablica po posortowaniu: ");wyswietl(tablica);
	return 0;
}
