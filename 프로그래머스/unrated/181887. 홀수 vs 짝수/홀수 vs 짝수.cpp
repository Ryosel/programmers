#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd = 0, even = 0;
    
    for(int i = 0; i < num_list.size(); i++){
        if(i % 2 == 0) 
            odd += num_list[i];
        else if(i % 2 != 0) 
            even += num_list[i];
    }
    
    if(odd >= even) answer = odd;
    else answer = even;
    
    return answer;
}