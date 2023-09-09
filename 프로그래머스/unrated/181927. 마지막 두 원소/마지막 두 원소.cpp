#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    
    //Returns an iterator referring to the past-the-end element in the vector container
    auto it = answer.end();
    int last_idx = distance(answer.begin(), it);
    
    int last = answer[last_idx - 1];
    int prev = answer[last_idx - 2];
    
    if(last > prev) answer.push_back(last - prev);
    
    else answer.push_back(last * 2);
    
    return answer;
}