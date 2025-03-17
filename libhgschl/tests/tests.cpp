#include "libhgschl.h"
#include <iostream>

std::string testtitletab = "                            ";

void wypisztablicetest()
{
    std::cout<<testtitletab<<"void wypisztablice(int a[], int n)\n";

    int a[] = {1,6,2,5,3};

    std::cout<<"Oczekiwany wynik: 1 6 2 5 3\n";
    wypisztablice(a,5);
    std::cout<<"\n";

    std::cout<<"Oczekiwany wynik: 1\n";
    wypisztablice(a,1);

    return;
}

void wypelnijlosowotablicetest()
{
    std::cout<<testtitletab<<"void wypelnijlosowotablice(int t[], int n, int a = 0, int b = 10)\n";

    int a[15];

    std::cout<<"Oczekiwany wynik: tablica z 15 elementami wygenerowanymi losowo, w zakresie od 3 do 9 wlacznie.\n";
    wypelnijlosowotablice(a,15,3,9);
    wypisztablice(a,15);
    std::cout<<"\n";

    std::cout<<"Oczekiwany wynik: tablica z 15 elementami wygenerowanymi losowo, w zakresie od 3 do 9 wlacznie, rozna od poprzedniej.\n";
    wypelnijlosowotablice(a,15,3,9);
    wypisztablice(a,15);
    std::cout<<"\n";

    return;
}

int main()
{
    std::cout<<"\n";

    wypisztablicetest();
    srand(time(NULL));
    wypelnijlosowotablicetest();
}