#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int s_size = s.size();
    int quotient = s_size / 2; 
    
    if(s_size % 2 == 0){
        answer.push_back(s[quotient - 1]);  
        answer.push_back(s[quotient]); 
    }
    else answer.push_back(s[quotient]);          

    return answer;
}