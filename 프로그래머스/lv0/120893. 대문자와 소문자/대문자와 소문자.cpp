#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    char temp;
    for(int i = 0; i < my_string.size(); i++){
        if(islower(my_string[i])) temp = toupper(my_string[i]);
        else temp = tolower(my_string[i]); 
        answer.push_back(temp);
    }
    return answer;
}