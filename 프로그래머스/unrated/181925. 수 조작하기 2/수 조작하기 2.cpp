#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    int prev_num = 0, curr_num = 0;
    string answer = "";
    
    prev_num = numLog[0];
    for(int i = 1; i < numLog.size(); i++){
        if(i >= 2) prev_num = numLog[i-1];
        curr_num = numLog[i];
        
        if(curr_num - prev_num == 1)
            answer += 'w';
        else if(curr_num - prev_num == -1)
            answer += 's';
        else if(curr_num - prev_num == 10)
            answer += 'd';
        else if(curr_num - prev_num == -10)
            answer += 'a';
    }    
    return answer;
}