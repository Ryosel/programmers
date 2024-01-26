#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 1;
    int count = 1;
    int size = numbers.size();
    
    while(count < k){
        if(answer >= size) { answer -= size; }        
        answer += 2;
        count++;
    }
    return answer;
}