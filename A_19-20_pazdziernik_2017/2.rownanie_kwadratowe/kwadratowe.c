//
// Program do obliczania rozwiazan rownania kwadratowego
// Michal Jarzynski
//

#include <stdio.h>
#include <math.h>

double pobierz(char* tekst)
{
	double z;
	printf("%s",tekst);scanf("%lf",&z);
	while(getchar()!='\n');
	return z;
}

int main()
{
	double a,b,c,delta,x1,x2;
	puts("Program do obliczania rownania kwadratowego ax2+bx+c=0");
	puts("(czesci dziesietne np. 5.42 podaj po kropce, nie po przecinku)");
	puts("--------------------------------------------------------------");
	a=pobierz("Podaj A=");
	b=pobierz("Podaj B=");
	c=pobierz("Podaj C=");
	
	printf("Obliczam rozwiazania rownania %gx2%+gx%+g=0\n",a,b,c);
	
	if(a==0)
	{
		puts("Przy podanych danych rownanie nie jest rownaniem kwadratowym (a=0)");
		if(b==0)
		{
			puts("Brak rozwiazania");
		}
		else
		{
			x1=(-c)/b;
			printf("Istnieje jedno rozwiazanie: x=%g\n",x1);
		}
		
	}
	else
	{
		delta=(b*b)-(4*a*c);
		if(delta==0)
		{
			x1=-b/(2*a);
			printf("Istnieje jedno rozwiazanie: x=%g\n",x1);
		}
		else if(delta>0)
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Istnieja dwa rozwiazania: x1=%g, x2=%g\n",x1,x2);
		}
		else
		{
			printf("Przy podanych danych nie istnieje rozwiazanie rzeczywiste (delta<0)\n");
			
		}
	}
}
