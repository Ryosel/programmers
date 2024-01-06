#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0; //total

    for(int i = 0; i < order.size(); i++){
        if(order[i] == "anything")
            answer += 4500;
        else if(order[i].find("americano") != string::npos){ 
            answer += 4500;
        } 
        else if(order[i].find("latte") != string::npos){
            answer += 5000;
        }
        
    }

    return answer;
}