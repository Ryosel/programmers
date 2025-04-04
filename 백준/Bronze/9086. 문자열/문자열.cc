#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string str;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> str;
        cnt = str.size();

        cout << str[0];
        cout << str[cnt - 1];
        cout << "\n";
    }

    return 0;
}