# Program do obliczania pierwiastków równania kwadratowego

1. Program za pomocą funkcji pobiera z konsoli wartości a,b,c (wykorzystując `scanf`)

```c
double pobierz(char* tekst)
{
	double z;
	printf("%s",tekst);scanf("%lf",&z);
	while(getchar()!='\n');
	return z;
}
```

2. Program oparty jest na konstrukcji `if(){...}else{...}`

3. Obliczanie oparte jest na zmiennych zmiennoprzecinkowych podwójnej precyzji (`double`)

4. Kompilacja programu wymaga "linkowania" biblioteki matematycznej (`-lm`) (wymagane przez użycie w programie funkcji obliczania pierwiastka kwadratowego - `sqrt()`)

```sh
$ gcc kwadratowe.c -o kwadratowe.out -lm
```

5. Przy podawaniu części dziesiętnych dla wartości a,b,c wymagane jest ich oddzielenie kropką a nie przecinkiem (np. 4.87, nie 4,78)
