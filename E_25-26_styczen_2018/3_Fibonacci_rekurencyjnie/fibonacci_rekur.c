//
// Michał Jarzyński SSINF2017 grupa 2
// program do liczenia ciagu Fibonacciego metoda rekurencyjna
//

#include <stdio.h>

int fibonacci(int index)
{
	if(index>1)
		return fibonacci(index-1)+fibonacci(index-2);
	else
		return index;
}

int main(){
	int index;

	printf("Podaj indeks w ciagu Fibonacciego: ");
	scanf("%d", &index);

	if(index>=0) printf("F(%d) = %d\n", index, fibonacci(index));

	return 0;
}
