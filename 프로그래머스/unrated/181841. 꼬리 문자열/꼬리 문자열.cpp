#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    for(int i = 0; i < str_list.size(); i++){
        size_t it = str_list[i].find(ex);
        
        if(it == string::npos)
            answer += str_list[i];
        else
            continue;
    }
    return answer;
}