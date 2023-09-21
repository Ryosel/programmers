#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int idx = 1;
    while(idx <= n){
        if(n % idx == 0) answer.push_back(idx);
        idx++;
    }
    return answer;
}