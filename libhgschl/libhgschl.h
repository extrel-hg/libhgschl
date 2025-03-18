#pragma once
#include <iostream>

void intswap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

void bubblesort(int a[], int n)
{
    if(n < 1) return;
    if(n == 1) return;
    if(n == 2)
    {
        if(a[1] < a[0])
        {
            intswap(a[1],a[0]);
        }
    }
    
    for(int i = 0; i < n+1; i++)
    {
        bool sorted = true;
        for(int j = 1; j < n; j++)
        {
            if(a[j] < a[j-1])
            {
                sorted = false;
                intswap(a[j],a[j-1]);
            }
        }
        if(sorted) return;
    }

    return;
}

void wypisztablice(int a[], int n)
{
    if(n < 0) n = 0;
    for(int i = 0; i < n;i++)
    {
        std::cout<<a[i];
        if(i < n-1) std::cout<<" ";
    }
    std::cout<<"\n";
    return;
}

void wypelnijlosowotablice(int t[], int n, int a = 0, int b = 10)
{
    if(n < 0) n = 0;
    for(int i = 0; i < n; i++)
    {
        t[i] = (rand() % (b-a+1)) + a;
    }
    return;
}

int szybkiepotegowanie(int a, int b, bool* error = NULL)
{
    if(b < 0)
    {
        *error = true;
        return -1;
    }
    if(b == 1)
    {
        return a;
    }
    if(b == 0)
    {
        return 1;
    }
    if(b%2 == 0)
    {
        int t = szybkiepotegowanie(a, b/2);
        return t*t;
    }
    if(b%2 != 0)
    {
        int t = szybkiepotegowanie(a, b/2);
        return t*t*a;
    }
   
    return -1;
}

bool parzysta(int a)
{
    if(a%2 == 0) return true;
    if(a%2 != 0) return false;
    return false;
}