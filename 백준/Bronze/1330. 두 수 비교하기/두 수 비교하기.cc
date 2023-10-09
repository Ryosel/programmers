#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    if(n < m) cout << "<";
    else if(n > m) cout << ">";
    else if(n == m) cout << "==";
    return 0;
}