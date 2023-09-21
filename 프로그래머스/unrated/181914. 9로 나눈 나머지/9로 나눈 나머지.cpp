#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int total = 0;
    for(int i = 0; i < number.length(); i++){
        total += number[i] - '0';
    }
    answer = total % 9;
        
    return answer;
}