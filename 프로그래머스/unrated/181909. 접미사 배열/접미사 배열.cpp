#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    int idx = 0;
    
    while(idx < my_string.size()){
        string temp = "";

        for(int i = idx; i < my_string.size(); i++){
            temp += my_string[i];
        }
        
        answer.push_back(temp);
        idx++;
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}