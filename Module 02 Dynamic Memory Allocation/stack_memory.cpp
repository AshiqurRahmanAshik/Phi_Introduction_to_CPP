/*
Problem Link: Stack Memory
 Date:   27/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int *fun()
{

    static int x = 10;
    //int x = 10;
    return &x; // return the address of x
}

int main()
{
    int *p = fun(); // receiving the address of x
    cout << "main: ";
    cout << *p << endl;
    return 0;
}
// Segmentation fault