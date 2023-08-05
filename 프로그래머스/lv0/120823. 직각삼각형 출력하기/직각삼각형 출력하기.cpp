#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    char star = '*';
    
    for(int i = 1; i <= n; i++){
        cout << string(i, star) << endl;
    }
    return 0;
}