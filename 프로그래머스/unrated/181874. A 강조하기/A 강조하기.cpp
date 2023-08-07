#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = myString;
    
    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == 'a' && islower(answer[i]) != 0){
            char c = toupper(answer[i]);
            swap(answer[i], c);       
        }
        else if(answer[i] != 'A' && islower(answer[i]) == 0){
            char c = tolower(answer[i]);
            swap(answer[i], c);            
        }
    }
    return answer;
}