#include <string>
#include <vector>
#include <iostream> 

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    int count = 0;
    int myString_len = myString.size();
    int pat_len = pat.size();
    
    for(int i = 0; i < myString_len - (pat_len-1); i++){
        if(myString.substr(i, pat_len) == pat) answer++;
    }
    return answer;
}