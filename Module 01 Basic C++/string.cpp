/* 
Problem Link: string
 Date: 17/11/25  
*/

#include <iostream>
using namespace std;

int main() {
    char s[1000];;
  //  cin >> s;                    // without considering space
  // cin.ignore();                // it will ignore one enter
    cin.getline(s,100);          // considering space
    cout << s << endl; 
    string s;                   // built in string data type
    return 0;
}
