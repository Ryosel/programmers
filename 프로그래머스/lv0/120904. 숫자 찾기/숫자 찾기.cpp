#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    
    string num_str = to_string(num);
    string k_str = to_string(k);
    
    int idx = num_str.find(k_str);
    
    if(idx != -1) answer += idx + 1;
    else answer = idx;
    
    return answer;
}