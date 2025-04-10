# libhgschl v0.7.0

# Filozofia biblioteki

## Function overloading
Niektóre funkcje mogą być wywołane dla różnych typów zmiennych im przesłanych. Te funkcje oznacza się w następujący sposób:
`t[] <=> double, int, float`
Taki zapis oznacza, że dana zmienna wejściowa może być typem int, double czy też float.

## Sortowanie tablic

Wszelkie sortowanie tablic tudzież sprawdzanie ich posortowania jest domyślnie wykonywane rosnąco: pierwszy element jest najmniejszy, ostatni największy.

# Funkcje

Wszystkie funkcje znajdują się w namespace hg. Przy używaniu biblioteki można albo dodać linijkę kodu `using namespace hg`, lub przy wywołaniu każej funkcji dodać tekst `hg::`, np. `hg::parzysta(4)`.

## void bubblesort(int a[], int n)
Funkcja sortuje tablicę sposobem bubblesort. Obecnie nie jest to najbardziej optymalna forma algorytmu bubblesort.
`int a[]` to tablica sortowana, `int n` to ile elementów od początku będzie posortowanych. Daj `n` równe rozmiarowi tablicy, by posortować całą tablicę.

```
int a[6] = {6,5,4,3,2,1};
bubblesort(a,6);
```

## int easyrand(int a, int b)
Zwraca wartość losową w przedziale od a do b, włącznie.

Należy wywołać funkcję `srand()` przed pierwszym wywołaniem funkcji `easyrand`.

Jeżeli podane b jest mniejsze niż a, wartości są zamieniane.

Jeżeli b nie zostało podane, lub zostało ustawione na NULL, zostanie zwrócona wartość a.

## void initrand()
Należy ją wywołać przed użyciem funkcji `easyrand` czy `wypelnijlosowotablice`.

## void intswap(int& a, int& b)
Funkcja jako argumenty bierze dwie wartości integer, a następnie je zamienia.

## int maks(int a, int b)
Zwraca większy element z dwóch podanych.

## int minim(int a, int b)
Zwraca mniejszy element z dwóch podanych.

## bool parzysta(int a)
Dla dowolnego int a zwraca prawda (1) gdy a jest parzyste, a fałsz (0) gdy a jest nieparzyste.

## int szybkiepotegowanie(int a, int b, bool* error = NULL)
Rekurencyjna funkcja szybkiego potengowania, a^b, gdzie b >= 0.

Przy wywolywaniu funkcji nie trzeba przesylac adresu pamieci do zmiennej bool error.

Natomiast jezeli trzeba zadbac o bezpieczenstwo (np. gdy b moze byc ujemne), to informacje o wystapieniu bledu mozna wydobyc w nastepujacy sposob.

```
bool error = false;
std::cout<<szybkiepotegowanie(2,-5, &error)<<"\n";
if(error) std::cout<<"Blad. Wykladnik ujemny\n\n";
```

Powyzszy kod zawsze zwroci blad. Gdy nie ma potrzeby dbania o bezpieczenstwo wykladnika, funkcji mozna uzyc w intuicyjny sposob.

```
std::cout<<"Oczekiwany wynik: (-3)^5 (-243)\n";
std::cout<<szybkiepotegowanie(-3,5)<<"\n\n";
```

Powyzszy kod zwraca -243.

## void wypelnijlosowotablice(int t[], int n, int a = 0, int b = 10)
Wypełnia pierwsze n pozycji tablicy integer losowymi wartościami w zakresie od a do b włącznie.

Przed pierwszym wywołaniem funkcji, należy wywołać funkcję `srand` w następujący sposób: `srand(time(NULL))`.

Jeśli funkcja zostanie wywołana bez ustawienia wartości a i b, to domyślnie zostanie użyty przedział od 0 do 10.

Jeśli b jest mniejsze niż a, a i b zostaną zamienione.

## void wypelnijtablice(int t[], int n, int a = 0)
Wypełnia pierwsze n pozycji w tablicy integer wartością a.

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