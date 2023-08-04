#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    int min = answer[0];
    int minIdx = 0;
    
    if(answer.size() > 0){
        for(int i = 0; i < answer.size(); i++){
            if(answer[i] < min){
                min = answer[i];
                minIdx = i;
            }
        }        
    }
    answer.erase(answer.begin() + minIdx);
    
    if(answer.size() <= 0) 
        answer.push_back(-1);
    
    return answer;
}