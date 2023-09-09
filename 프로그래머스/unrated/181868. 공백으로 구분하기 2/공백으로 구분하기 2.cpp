#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;

    int idx = 0;
    string token;
    
    while((idx = my_string.find(' ')) != string::npos){
        string token = my_string.substr(0, idx);
        //cout << idx << ", " << token << endl;
        
        //공백이 아닌 경우만 vector 원소로 추가
        if(idx != 0) answer.push_back(token); 
        my_string.erase(0, idx + 1);
    }
    if(my_string.length() != 0) answer.push_back(my_string);
    
    return answer;    
}