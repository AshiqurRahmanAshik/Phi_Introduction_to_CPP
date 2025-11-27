/* 
Problem Link: Switch
 Date:   17/11/25
*/

#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day;
    switch(day){
        case 1: cout << "sat";break;
        case 2: cout << "sun";break;
        case 3: cout << "mon";break;
        case 4: cout << "tue";break;
        case 5: cout << "wed";break;
        case 6: cout << "thr";break;
        case 7: cout << "fri";break;
    } 
    return 0;
}