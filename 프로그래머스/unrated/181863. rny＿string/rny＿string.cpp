#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = rny_string;
    string str = "rn";
    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == 'm')
            answer.replace(i, str.size() - 1, str);
    }
    return answer;
}