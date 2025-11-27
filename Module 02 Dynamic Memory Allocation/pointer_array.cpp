/*
Problem Link: Pointer in Array
 Date:   27/11/25
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl; // 10 20 30
    }
    cout << arr << endl;     // 0x61fe30e
    cout << &arr[0] << endl; // 0x61fe30e
    cout << &arr[1] << endl; // 0x61fe34e
    cout << &arr[2] << endl; // 0x61fe38e
    cout << &arr[3] << endl; // 0x61fe3ce => Random Location

    *(&arr[1]) = 100;
    cout << arr[1] << endl; // 100
 
    return 0;
}