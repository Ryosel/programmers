#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = myString;
    
    for(int i = 0; i < answer.size(); i++)
        if(islower(answer[i]) != 0) answer[i] = toupper(answer[i]);
    
    return answer;
}