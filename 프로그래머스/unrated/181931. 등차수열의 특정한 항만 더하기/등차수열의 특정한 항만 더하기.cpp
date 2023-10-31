#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int term = a;
    
    for(int i = 0; i < included.size(); i++){
        if(included[i] == false) continue;
        
        if(i >= 1) term = a + (i * d);
        answer += term;
    }
    return answer;
}