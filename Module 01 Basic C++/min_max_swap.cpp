/* 
Problem Link: Min, Max and Swap
 Date:   17/11/25
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << min(a,b) << endl;
    cout << max(a,b) << endl;
    cout << min({-5,10,15,5}) << endl;
    cout << max({-5,10,15,5}) << endl;
    swap(a,b);
    cout << a << " " << b; 
    return 0;
}  