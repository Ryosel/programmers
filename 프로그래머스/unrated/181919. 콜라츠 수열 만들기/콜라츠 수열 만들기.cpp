#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    while(n != 1){
        answer.push_back(n);
        if(n % 2 == 0) n = n / 2;
        else if(n % 2 != 0) n = (3 * n) + 1;
    }
    
    if(n == 1) answer.push_back(n);
    return answer;
}