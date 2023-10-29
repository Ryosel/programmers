#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer;
    int cnt = 0;
    sort(indices.begin(), indices.end());
    
    int str_size = my_string.size();
    
    for(int i = 0; i < str_size; i++){
        for(int j = 0; j < indices.size(); j++){
            if(i == indices[j]){
                my_string.erase(i - cnt, 1);
                cnt++;
                //cout << cnt << ", " << i << ", " << indices[j] << ", " << my_string << endl;
            } 
        }
    }
    return my_string;
}