#include "libhgschl.h"

//Biblioteka uzyta tylko do porownania z biblioteka standardowa
#include <cmath>
#include <chrono>

std::string testtitletab = "=========================================== ";
std::string errorline =    "# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # ";

using namespace hg;

void wypisztablicetest()
{
    std::cout<<testtitletab<<"void wypisztablice(int a[], int n)\n\n";

    int a[] = {1,6,2,5,3};

    std::cout<<"Argumenty: (a,5)\nOczekiwany wynik: 1 6 2 5 3\n";
    wypisztablice(a,5);
    std::cout<<"\n";

    std::cout<<"Argumenty: (a,1)\nOczekiwany wynik: 1\n";
    wypisztablice(a,1);

    return;
}

void wypelnijlosowotablicetest()
{
    std::cout<<testtitletab<<"void wypelnijlosowotablice(int t[], int n, int a = 0, int b = 10)\n\n";

    int a[15];

    std::cout<<"Argumenty: (a,15,3,9)\nOczekiwany wynik: tablica z 15 elementami wygenerowanymi losowo, w zakresie od 3 do 9 wlacznie.\n";
    wypelnijlosowotablice(a,15,3,9);
    wypisztablice(a,15);
    std::cout<<"\n";

    std::cout<<"Argumenty: (a,15,3,9)\nOczekiwany wynik: tablica z 15 elementami wygenerowanymi losowo, w zakresie od 3 do 9 wlacznie, rozna od poprzedniej.\n";
    wypelnijlosowotablice(a,15,3,9);
    wypisztablice(a,15);
    std::cout<<"\n";

    return;
}

void wypelnijtablicetest()
{
    std::cout<<testtitletab<<"void wypelnijtablice(int t[], int n, int a = 0)\n\n";

    int a[15];

    std::cout<<"Argumenty: (a,15,9)\nOczekiwany wynik: tablica wypelniona elementem 9.\n";
    wypelnijtablice(a,15,9);
    wypisztablice(a,15);
    std::cout<<"\n";

    return;
}

void szybkiepotegowanietest()
{
    std::cout<<testtitletab<<"int szybkiepotegowanie(int a, int b, bool* error = NULL)\n\n";
    std::cout<<"Argumenty: (2,8)\nOczekiwany wynik: 2^8 (256)\n";
    std::cout<<szybkiepotegowanie(2,8)<<"\n\n";
    if(szybkiepotegowanie(2,8) != std::pow(2,8)) std::cout<<errorline<<"Blad w porownaniu z biblioteka standardowa.\n\n";

    std::cout<<"Argumenty: (0,0)\nOczekiwany wynik: 0^0 (1)\n";
    std::cout<<szybkiepotegowanie(0,0)<<"\n\n";
    if(szybkiepotegowanie(0,0) != std::pow(0,0)) std::cout<<errorline<<"Blad w porownaniu z biblioteka standardowa.\n\n";

    std::cout<<"Argumenty: (1,123)\nOczekiwany wynik: 1^123 (1)\n";
    std::cout<<szybkiepotegowanie(1,123)<<"\n\n";
    if(szybkiepotegowanie(1,123) != std::pow(1,123)) std::cout<<errorline<<"Blad w porownaniu z biblioteka standardowa.\n\n";

    std::cout<<"Argumenty: (-3,5)\nOczekiwany wynik: (-3)^5 (-243)\n";
    std::cout<<szybkiepotegowanie(-3,5)<<"\n\n";
    if(szybkiepotegowanie(-3,5) != std::pow(-3,5)) std::cout<<errorline<<"Blad w porownaniu z biblioteka standardowa.\n\n";

    std::cout<<"Argumenty: (2,-5,&error)\nOczekiwany wynik: Wykladnik ujemny (-1)\n";
    bool error = false;
    std::cout<<szybkiepotegowanie(2,-5, &error);
    if(error) std::cout<<" Blad. Wykladnik ujemny\n\n";

    return;
}

void parzystatest()
{
    std::cout<<testtitletab<<"bool parzysta(int a)\n\n";
    std::cout<<"Argument: 5\nOczekiwany wynik: 0\n";
    std::cout<<parzysta(5)<<"\n\n";

    std::cout<<"Argument: 4\nOczekiwany wynik: 1\n";
    std::cout<<parzysta(4)<<"\n\n";

    std::cout<<"Argument: 0\nOczekiwany wynik: 1\n";
    std::cout<<parzysta(0)<<"\n\n";

    std::cout<<"Argument: -3\nOczekiwany wynik: 0\n";
    std::cout<<hg::parzysta(-3)<<"\n\n";

    return;
}

void intswaptest()
{
    std::cout<<testtitletab<<"void intswap(int& a, int& b)\n\n";

    std::cout<<"Argumenty: a = 1, b = 5\nOczekiwany wynik: a = 5, b = 1\n";
    int a = 1;
    int b = 5;
    intswap(a,b);
    std::cout<<"a = "<<a<<", b = "<<b<<"\n\n";
    {
        int aprim = 1, bprim = 5;
        int abis = 1, bbis = 5;
        intswap(aprim,bprim); std::swap(abis,bbis);
        if(aprim != abis || bprim != bbis) std::cout<<errorline<<"Blad w porownaniu z biblioteka standardowa.\n\n";
    }
    

    std::cout<<"Argumenty: t[0] = 7, t[1] = 4\nOczekiwany wynik: t[0] = 4, t[1] = 7\n";
    int t[2];
    t[0] = 7;
    t[1] = 4;
    intswap(t[0],t[1]);
    std::cout<<"t[0] = "<<t[0]<<", t[1] = "<<t[1]<<"\n\n";

    return;
}

void easyrandtest()
{
    std::cout<<testtitletab<<"int easyrand(int a, int b)\n\n";

    std::cout<<"Argumenty: (-5,10)\nOczekiwany wynik: Losowe liczby nalezace do [-5,10]. (Funkcja wywolywana jest kilka razy)\n";
    std::cout<<easyrand(-5,10)<<" "<<easyrand(-5,10)<<" "<<easyrand(-5,10)<<" "<<easyrand(-5,10)<<" "<<easyrand(-5,10)<<"\n";

    std::cout<<"\nArgumenty: (-5,-6)\nOczekiwany wynik: Losowe liczby nalezace do [-6,-5]. (Funkcja wywolywana jest kilka razy)\n";
    std::cout<<easyrand(-5,-6)<<" "<<easyrand(-5,-6)<<" "<<easyrand(-5,-6)<<" "<<easyrand(-5,-6)<<" "<<easyrand(-5,-6)<<"\n";

    std::cout<<"\nArgument: (2)\nOczekiwany wynik: 2\n";
    std::cout<<easyrand(2)<<"\n";

    std::cout<<"\nArgumenty: (155)\nOczekiwany wynik: 155\n";
    std::cout<<easyrand(155)<<"\n";

    std::cout<<"\n";
    return;
}

void maxtest()
{
    std::cout<<testtitletab<<"int maks(int a, int b)\n\n";

    std::cout<<"Argumenty: (-5,10), (20,10), (7,7)\nOczekiwany wynik: 10 20 7\n";
    std::cout<<maks(-5,10)<<" "<<maks(20,10)<<" "<<maks(7,7)<<"\n";

    std::cout<<"\n";
    return;
}

void mintest()
{
    std::cout<<testtitletab<<"int minim(int a, int b)\n\n";

    std::cout<<"Argumenty: (-5,10), (20,10), (7,7)\nOczekiwany wynik: -5 10 7\n";
    std::cout<<minim(-5,10)<<" "<<minim(20,10)<<" "<<minim(7,7)<<"\n";

    std::cout<<"\n";
    return;
}

void bubblesorttest()
{
    std::cout<<testtitletab<<"void bubblesort(int a[], int n)\n\n";
    int a[6] = {6,5,4,3,2,1};
    std::cout<<"Argumenty: ({6,5,4,3,2,1},6)\nOczekiwany wynik: {1,2,3,4,5,6}\n";
    bubblesort(a,6);
    wypisztablice(a,6);

    int b[] = {2,1};
    std::cout<<"\nArgumenty: ({2,1},2)\nOczekiwany wynik: {1,2}\n";
    bubblesort(b,2);
    wypisztablice(b,2);

    int c[] = {6};
    std::cout<<"\nArgumenty: ({6},1)\nOczekiwany wynik: {6}\n";
    bubblesort(c,1);
    wypisztablice(c,1);

    int d[] = {2,1,6,2,5,8,1,214,-6,0};
    std::cout<<"\nArgumenty: ({2,1,6,2,5,8,1,214,-6,0},10)\nOczekiwany wynik: {-6,0,1,1,2,2,5,6,8,214}\n";
    bubblesort(d,10);
    wypisztablice(d,10);

    int e[15];
    wypelnijlosowotablice(e,15,0,9);
    std::cout<<"\nArgumenty: ";
    wypisztablice(e,15);
    std::cout<<"Oczekiwany wynik: posortowana tablica.\n";
    bubblesort(e,15);
    wypisztablice(e,15);

    std::cout<<"\n";

    return;
}

int main()
{
    std::cout<<"\n";

    initrand();
    std::string t;

    std::cin.get();
    bubblesorttest();

    std::cin.get();
    easyrandtest();

    std::cin.get();
    intswaptest();

    std::cin.get();
    maxtest();

    std::cin.get();
    mintest();

    std::cin.get();
    parzystatest();

    std::cin.get();
    szybkiepotegowanietest();

    std::cin.get();
    wypelnijlosowotablicetest();

    std::cin.get();
    wypelnijtablicetest();

    std::cin.get();
    wypisztablicetest();
}