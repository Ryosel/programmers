#include <string>
#include <vector>
#include <algorithm>


using namespace std;

string solution(string my_string) {
    string answer = my_string;
    
    for(int i = 0; i < answer.size(); i++){
        if(islower(answer[i]) == 0)
            answer[i] = tolower(answer[i]);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}