//
// Michał Jarzyński SSINF2017 grupa 2
// program do zliczania występowania malych liter w ciągu
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// funkcja do czyszczenia ekranu
void czysc_ekran()
{
	system("clear");
}

// funkcja sprawdzająca, czy podany znak jest literą (małą lub dużą)
// parametry: znak
// wyjście: true jeśli znak, false jeśli nie
bool czy_znak(char znak)
{
	if(znak>='a'&&znak<='z')
		return true;
	else
		return false;
}

// funkcja zliczająca występowanie liter w ciągu
// parametry: wskaźnik na ciąg, wskaźnik na tablicę występowań
void zlicz(char* ciag, int* histogram)
{
	int i=0;
	while(ciag[i])
	{
		if(czy_znak(ciag[i]));
		{
			histogram[ciag[i]-'a']++;
		}
		i++;
	}
}

// funkcja wypisująca ciąg znaków oraz alfabet wraz z ilością występowania
// każdej litery w niniejszym ciągu
void wypisz(char* ciag, int* histogram)
{
	int i;
	printf("%s\n\n",ciag);
	for(i=0;i<26;i++)
	{
		printf("  %c",i+'a');
	}
	puts("");
	
	for(i=0;i<26;i++)
	{
		printf("%3d",histogram[i]);
	}
	puts("\n");
}

// funkcja główna
int main()
{
	char* ciag="Ala ma kota, a kot ma Ale.";	// przykładowy ciąg znaków
	int histogram[26]={0};		// tablica przechowująca zliczone litery
	
	czysc_ekran();
	zlicz(ciag,histogram);
	wypisz(ciag,histogram);

}
