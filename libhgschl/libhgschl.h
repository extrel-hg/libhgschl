#pragma once
#include <iostream>

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