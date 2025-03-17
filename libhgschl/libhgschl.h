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