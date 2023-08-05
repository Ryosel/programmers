#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> num_list) {
    string odd_str = "";
    string even_str = ""; 
    int answer = 0;
    
    
    for(int i = 0; i < num_list.size(); i++){
        if(num_list[i] % 2 != 0) odd_str += to_string(num_list[i]);
        else even_str += to_string(num_list[i]);
    }
    answer = stoi(odd_str) + stoi(even_str);
    return answer;
}