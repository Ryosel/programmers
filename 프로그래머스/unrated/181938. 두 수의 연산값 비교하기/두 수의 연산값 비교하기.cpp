#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string str_ab = to_string(a) + to_string(b); 
    int ab = stoi(str_ab);
    int answer = 0;
    
    if(ab > (2*a*b)) answer = ab;
    else answer = 2*a*b;  
    
    return answer;
}