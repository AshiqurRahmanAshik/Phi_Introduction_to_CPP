/*
Problem Link: Pointer
 Date:   27/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    cout << x << endl;     // 10
    cout << &x << endl;    // 0x61fe4ce
    cout << *(&x) << endl; // 10

    int *ptr = &x;
    cout << ptr << endl;  // 0x61fe4ce
    cout << *ptr << endl; // 10
    cout << &ptr << endl; // 0x61fe40e
    *ptr = 20;            // modify the value with 20
    cout << *ptr << endl; // 20
    return 0;
}