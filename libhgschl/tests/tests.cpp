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
}

int main()
{
    std::cout<<"\n";

    wypisztablicetest();
}