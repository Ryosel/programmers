#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int mul = 1;
    int sum = 0;
    
    int answer = 0;
    for(int i : num_list){
        mul *= i; sum += i;
    }
    if(mul < pow(sum, 2)) answer = 1;
    else answer = 0;
    return answer;
}