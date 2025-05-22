#pragma once
#include <iostream>
#include <random>
#include <time>
/*
TO ADD:

easytimemeasure function
auto start = std::chrono::high_resolution_clock::now();
auto finish = std::chrono::high_resolution_clock::now();
std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(finish-start).count() << "ns\n";

*/

namespace hg
{
    int maks(int a, int b)
    {
        if(a >= b) return a;
        return b;
    }

    int minim(int a, int b)
    {
        if(a <= b) return a;
        return b;
    }

    void intswap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
        return;
    }

    void initrand()
    {
        srand(time(NULL));
    }

    int easyrand(int a, int b)
    {
        if(b<a)
        {
            intswap(a,b);
        }
        if(b==a)
        {
            return a;
        }
        int out = rand() % (b-a+1) + a;
        return out;
    }
    
    int easyrand(int a)
    {
        return a;
    }

    void bubblesort(int a[], int n)
    {
        if(n <= 1) return;
        if(n == 2)
        {
            if(a[1] < a[0])
            {
                intswap(a[1],a[0]);
            }
        }

        int jmin, jmax;
        jmin = 1;
        jmax = n;
        for(int i = 0; i < n+1; i++)
        {
            bool sorted = true;
            int tempjmin = jmin;
            int tempjmax = jmax;
            for(int j = jmin; j < jmax; j++)
            {
                if(tempjmin >= 0)
                {
                    tempjmin = j;
                }
                if(a[j] < a[j-1])
                {
                    tempjmin = -tempjmin;
                    tempjmax = j;
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
        if(n < 0) return;
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
        if(n < 0) return;
        if(b<a)
        {
            intswap(a,b);
        }
        for(int i = 0; i < n; i++)
        {
            t[i] = easyrand(a,b);
        }
        return;
    }
    void wypelnijtablice(int t[], int n, int a = 0)
    {
        if(n < 0) n = 0;
        for(int i = 0; i < n; i++)
        {
            t[i] = a;
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
    
}