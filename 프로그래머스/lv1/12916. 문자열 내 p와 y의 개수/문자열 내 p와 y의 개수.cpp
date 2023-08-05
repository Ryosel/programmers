#include <string>

using namespace std;

bool solution(string s)
{
    int p_size = 0;
    int s_size = 0;
        
    bool answer = true;

    for(char c : s){
        if(c == 'p' || c == 'P') p_size++;
        else if(c == 'y' || c == 'Y') s_size++;
    }
    if(p_size == s_size) answer = 1;
    else answer = 0;

    return answer;
}