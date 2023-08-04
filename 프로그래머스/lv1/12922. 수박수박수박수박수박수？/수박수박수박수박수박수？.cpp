#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string watermelon = "수박";
    string answer = "";
    
    if(n % 2 == 0){
        for(int i = 1; i <= (n/2); i++) answer += watermelon;        
    }
    else if(n % 2 != 0){
        for(int i = 0; i < (n/2); i++) answer += watermelon;
        answer = answer + "수";
    }
    return answer;
}