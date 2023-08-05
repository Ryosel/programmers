#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(int i = 0; i < num_list.size(); i++){
        if(abs(num_list[i]) == num_list[i]) answer = -1;
        else if(abs(num_list[i]) != num_list[i]){ answer = i; break; }   
    }
    return answer;
}