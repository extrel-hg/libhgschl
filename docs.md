# libhgschl v0.2.0

## void wypisztablice(int a[], int n)
Wypisuje pierwsze n elementów tablicy integer. Segmentation fault dla n większych niż ilość elementów. Dla n < 0 nie są wypisane żadne elementy.
**Przykład:**
```
int a[] = {1,6,2,5,3};
wypisztablice(a,5);
```
**Wynik:**
```
1 6 2 5 3
```

## void wypelnijlosowotablice(int t[], int n, int a = 0, int b = 10)
Wypełnia pierwsze n pozycji tablicy integer losowymi wartościami w zakresie od a do b włącznie.

Przed pierwszym wywołaniem funkcji, należy wywołać funkcję `srand` w następujący sposób: `srand(time(NULL))`.

Jeśli funkcja zostanie wywołana bez ustawienia wartości a i b, to domyślnie zostanie użyty przedział od 0 do 10.