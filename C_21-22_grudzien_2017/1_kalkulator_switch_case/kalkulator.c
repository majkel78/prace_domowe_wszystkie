// Michal Jarzynski
// kalkulator

#include <stdio.h>

void dodaj(double a,double b){printf("Wynik dodawania: %g\n",a+b);}
void odejmij(double a,double b){printf("Wynik odejmowania: %g\n",a-b);}
void mnoz(double a,double b){printf("Wynik mnozenia: %g\n",a*b);}
void dziel(double a,double b)
{
	if(b)	printf("Wynik dzielenia: %g\n",a/b);
	else	printf("Nie mozna podzielic przez ZERO\n");
}

void clear(){while(getchar()!='\n');}

int licz(double a,double b, char wybor)
{
	switch(wybor)
	{
		case '+':
			dodaj(a,b);
			break;
		case '-':
			odejmij(a,b);
			break;
		case '*':
			mnoz(a,b);
			break;
		case '/':
			dziel(a,b);
			break;
		default:
			printf("Podales nieodpowiedni znak!\n");
	}
	return 1;
}


int main(void)
{
	double a, b;
	char wybor;
	int czy_dalej=1;

	printf("Prosty kalkulator 4-ch funkcji.\n");
	while(czy_dalej==1)
	{
		printf("\n");
		printf("Podaj a: ");scanf("%lf",&a);clear();
		printf("Podaj b: ");scanf("%lf",&b);clear();
		printf("Podaj +,-,*,/ : ");scanf("%c",&wybor);clear();

		licz(a,b,wybor);
		
		printf("Czy dalej chcesz liczyc (1 - TAK, 0 - NIE): ");
		scanf("%d",&czy_dalej);
		clear();
	}

	return 0;
}
