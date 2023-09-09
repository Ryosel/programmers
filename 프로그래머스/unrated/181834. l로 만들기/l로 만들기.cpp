#include <string>
#include <vector>

using namespace std;

string solution(string myString) { //l(ASCII 108)
    string answer = myString;
    
    for(int i = 0; i < answer.size(); i++){
        if((int)answer[i] < (int)'l')
            answer[i] = 'l';
    }
    return answer;
}