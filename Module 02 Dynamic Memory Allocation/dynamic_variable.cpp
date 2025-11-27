/* 
Problem Link: Dynamic Memory Allocation
 Date:   
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x =10;
    int* p = new int; // we are getting address for using new keyword.
    *p =100;
    cout << *p <<endl;
    return 0;
}