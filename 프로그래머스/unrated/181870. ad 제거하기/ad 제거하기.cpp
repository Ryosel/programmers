#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i = 0; i < strArr.size(); i++){
        string temp = strArr[i];
        
        int idx = temp.find("ad");
        cout << idx << endl;
        
        if(idx == -1){
            answer.push_back(temp);
        }
    }

    return answer;
}