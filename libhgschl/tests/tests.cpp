#include "libhgschl.h"
#include <iostream>

std::string testtitletab = "=========================================== ";

void wypisztablicetest()
{
    std::cout<<testtitletab<<"void wypisztablice(int a[], int n)\n\n";

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
    std::cout<<testtitletab<<"void wypelnijlosowotablice(int t[], int n, int a = 0, int b = 10)\n\n";

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

void szybkiepotegowanietest()
{
    std::cout<<testtitletab<<"int szybkiepotegowanie(int a, int b, bool* error = NULL)\n\n";
    std::cout<<"Oczekiwany wynik: 2^8 (256)\n";
    std::cout<<szybkiepotegowanie(2,8)<<"\n\n";

    std::cout<<"Oczekiwany wynik: 0^0 (1)\n";
    std::cout<<szybkiepotegowanie(0,0)<<"\n\n";

    std::cout<<"Oczekiwany wynik: 1^123 (1)\n";
    std::cout<<szybkiepotegowanie(1,123)<<"\n\n";

    std::cout<<"Oczekiwany wynik: (-3)^5 (-243)\n";
    std::cout<<szybkiepotegowanie(-3,5)<<"\n\n";

    std::cout<<"Oczekiwany wynik: 2^(-5) => Wykladnik ujemny (-1)\n";
    bool error = false;
    std::cout<<szybkiepotegowanie(2,-5, &error)<<"\n";
    if(error) std::cout<<"Blad. Wykladnik ujemny\n\n";

    return;
}

int main()
{
    std::cout<<"\n";

    szybkiepotegowanietest();

    srand(time(NULL));
    wypelnijlosowotablicetest();

    wypisztablicetest();
}