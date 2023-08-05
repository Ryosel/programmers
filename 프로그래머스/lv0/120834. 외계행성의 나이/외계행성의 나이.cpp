#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string age_str = to_string(age);
    string answer = "";
    
    for(int i = 0; i < age_str.size(); i++){
        switch(age_str[i]){
            case '0': answer += 'a'; break;
            case '1': answer.push_back('b'); break;
            case '2': answer.push_back('c'); break;
            case '3': answer.push_back('d'); break; 
            case '4': answer.push_back('e'); break;
            case '5': answer.push_back('f'); break;
            case '6': answer.push_back('g'); break;
            case '7': answer.push_back('h'); break;
            case '8': answer.push_back('i'); break;
            case '9': answer.push_back('j'); break;
        }        
    }
    return answer;
}