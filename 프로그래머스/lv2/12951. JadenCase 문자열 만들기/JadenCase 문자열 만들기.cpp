#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = s;
    
    for(int i = 0; i < answer.size(); i++){   
        if(answer.size() == 1 && islower(answer[0]) != 0){
            char c = toupper(answer[0]);
            swap(answer[0], c);   
            break;
        }
        
        if(isdigit(answer[0]) == false && islower(answer[0])){
            char c = toupper(answer[0]);
            swap(answer[0], c);    
        }
        
        if(isspace((answer[i - 1]))){
            char c = toupper(answer[i]);
            swap(answer[i], c);             
        }
        else if(isspace((answer[i - 1])) == 0){
            if(isupper(answer[i])){
            char c = tolower(answer[i]);
            swap(answer[i], c);                  
            }
        }
    }
    return answer;
}