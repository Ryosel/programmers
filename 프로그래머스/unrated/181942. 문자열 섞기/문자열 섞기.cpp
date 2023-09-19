#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    
    int idx = 0;
    while(answer.length() != str1.length() + str2.length()){
        answer += str1[idx];
        answer += str2[idx];
        idx++;
    }
    return answer;
}