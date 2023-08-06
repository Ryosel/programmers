#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string delimiter = " ";
    
    size_t it = 0;
    while((it = my_string.find(delimiter)) != string::npos){
        answer.push_back(my_string.substr(0, it));
        my_string.erase(0, it + delimiter.length());
    }
    answer.push_back(my_string.substr(0, my_string.size()));
    return answer;
}