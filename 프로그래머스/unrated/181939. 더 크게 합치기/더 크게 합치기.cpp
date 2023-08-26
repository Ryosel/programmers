#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string ans_str1 = to_string(a) + to_string(b);
    string ans_str2 = to_string(b) + to_string(a);
    
    if(stoi(ans_str1) >= stoi(ans_str2))
        answer = stoi(ans_str1);
    else
        answer = stoi(ans_str2);
    
    return answer;
}