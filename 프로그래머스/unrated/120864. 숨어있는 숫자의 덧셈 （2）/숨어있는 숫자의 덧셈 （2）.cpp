#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    my_string += 'A';
    string num_str = "";
    int temp = 0;
    int answer = 0;
    
    for(int i = 0; i < my_string.size(); i++){
        if(isdigit(my_string[i]) != 0){
            num_str += my_string[i];            
        }
        else{
            if(num_str.size() >= 1){
                temp = stoi(num_str);
                answer += temp;
                temp = 0;
                num_str = "";
            }
        }
    }
    return answer;
}