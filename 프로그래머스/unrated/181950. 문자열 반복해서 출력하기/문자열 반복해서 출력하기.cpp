#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    int n;
    cin >> str >> n;
    
    string strout = "";
    for(int i = 0; i < n; i++)
        strout += str;
    cout << strout;
    return 0;
}