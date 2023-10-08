#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int max = 0, row_num = 0, col_num = 0;
    int temp = 0;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> temp;
            if(temp > max){ max = temp; row_num = i; col_num = j; }
        }
    } 
    cout << max << "\n";
    cout << row_num + 1 << " " << col_num + 1 << "\n";
}