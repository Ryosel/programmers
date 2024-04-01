#include <iostream>

using namespace std;
#define fio(){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }

int main() {
    int m;
    fio();
    cin >> m;

    //분해합 M(N(생성자) + N을 이루는 각 자리수 합)의 생성자 N 찾기
    for(int i = 1; i < m; i++){
        int curr = i;
        int sum = i;

        while(curr != 0){
            sum += curr % 10;
            curr /= 10;
        }

        if(sum == m){ //생성자가 있는 경우
            cout << i << '\n';
            return 0;
        }
    }
    //생성자가 없는 경우
    cout << 0 << '\n';
    return 0;
}