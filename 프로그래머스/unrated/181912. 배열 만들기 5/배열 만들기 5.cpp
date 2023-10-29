#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(int i = 0; i < intStrs.size(); i++){ //intStrs 0번부터 size까지
        string str = intStrs[i].substr(s, l); //i번째 intStrs 원소(string)의 s부터 l까지
        int str_num = stoi(str);
        if(str_num > k) answer.push_back(str_num);    
    }

    return answer;
}