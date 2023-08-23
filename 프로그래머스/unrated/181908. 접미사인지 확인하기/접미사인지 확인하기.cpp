#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    if(my_string.find(is_suffix) != string::npos){
        if(my_string.back() == is_suffix.back())
            answer = 1; 
    }
    return answer;
}