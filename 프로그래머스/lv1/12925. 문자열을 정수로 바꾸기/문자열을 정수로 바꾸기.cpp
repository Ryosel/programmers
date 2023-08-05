#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    if(s[0] != '-') answer = stoi(s);
    else answer = -(stoi(s.substr(1, s.size())));
    return answer;
}