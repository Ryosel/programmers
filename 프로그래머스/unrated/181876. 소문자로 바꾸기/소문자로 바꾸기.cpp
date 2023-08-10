#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = myString;
    
    for(int i = 0; i < answer.size(); i++)
        answer[i] = tolower(answer[i]);
    
    return answer;
}