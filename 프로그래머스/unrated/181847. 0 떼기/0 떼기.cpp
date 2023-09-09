#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string n_str) {
    string answer = n_str;
    
    int idx = 0;
    
    for(int i = 0; i < answer.length(); i++){
        if(answer[i] == '0') idx++;
        else break;
    }
    
    if(idx > 0) answer.erase(answer.begin(), answer.begin() + idx);
    
    return answer;
}