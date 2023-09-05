#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    if(c == 1 && m == 1) answer = my_string;
    
    else 
        for(int i = c - 1; i < my_string.size(); i += m){
            answer += my_string[i];
        }
    return answer;
}