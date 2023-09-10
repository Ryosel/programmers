#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string str = "";
    int idx = 0;
    
    while((idx = myString.find('x')) != string::npos){
        str = myString.substr(0, idx);
        if(str != "") answer.push_back(str);
        myString.erase(0, idx + 1);
    }
    
    if(myString.length() > 0)
        answer.push_back(myString);
    
    sort(answer.begin(), answer.end());
    return answer;
}