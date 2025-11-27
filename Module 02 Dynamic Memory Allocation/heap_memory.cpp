/*
Problem Link: Heap Memory
 Date:   27/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int x = 100;
    return &x;
}
int main()
{
    int *ptr = new int;
    *ptr = *fun();
    cout << *ptr << endl;

    return 0;
}