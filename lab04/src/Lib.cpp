#include<Lib.h>
#include<iostream>
using namespace std;

extern int j;

void print1()
{
    static int i=2;
    i++;
    j++;
    cout << "--------\n";
    cout << "i = " << i << "\n";
    cout << "j = " << j << "\n";
    cout << "--------\n";
    
}

void print2()
{
    static int i=0;
    i++;
    j++;
    cout << "--------\n";
    cout << "i = " << i << "\n";
    cout << "j = " << j << "\n";
    cout << "--------\n";
    
}

static void print3k()
{
    static int k=0;
    k++;
    cout << "k = " << k << "\n";    
}

void print3()
{
    static int i=0;
    i++;
    j++;
    cout << "--------\n";
    cout << "i = " << i << "\n";
    cout << "j = " << j << "\n";
    print3k();
    print2();
    cout << "--------\n";
}


