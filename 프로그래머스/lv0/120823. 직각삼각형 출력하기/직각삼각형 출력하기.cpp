#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    string answer = "";
    
    for(int i = 1; i <= n; i++){
        answer += '*';
        cout << answer << endl;
    }
    return 0;
}