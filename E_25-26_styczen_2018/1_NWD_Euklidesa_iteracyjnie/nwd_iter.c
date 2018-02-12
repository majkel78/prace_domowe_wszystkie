//
// Michał Jarzyński SSINF2017 grupa 2
// obliczanie wspolnego dzielnika dwoch liczb calkowitych
// algorytmem Euklidesa
// (iteracyjnie)
//

#include <stdio.h>
#include <stdlib.h>

int nwd(int a, int b) 
{
	int c;
    while (b != 0)
    {
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

void pokaz_nwd(int a, int b)
{
	if(a||b)	// jeśli jedna lub obie cyfry są różne od zera...
		printf("%d\n",nwd(abs(a),abs(b)));
	else		// .. jeśli obie cyfry są równe 0
		printf("nie mozna wyznaczyc wspolnego dzielnika\n");
}

int main()
{
    int a, b;

	printf("Obliczanie NWD - najwiekszego wspolnego dzielnika\n");

	printf("Podaj pierwsza liczbe: ");
	scanf("%d", &a);
	printf("   Podaj druga liczbe: ");
	scanf("%d", &b);
	printf("NWD(%d,%d) = ", a, b);
	pokaz_nwd(a,b);
	
    return 0;
}
