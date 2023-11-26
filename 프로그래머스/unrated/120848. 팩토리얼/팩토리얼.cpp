#include <string>
#include <vector>
//#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int num = 1;
    int idx = 1;
    while(num * idx < n){
        idx++;
        num *= idx;
        //cout << num << endl;
    }

    answer = idx;
    return answer;
}