//프로그래머스 
//코딩테스트 연습 - 연습문제
//최댓값과 최솟값
//https://school.programmers.co.kr/learn/courses/30/lessons/12939

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string delimit = " ";
    vector<int> token{};
    size_t pos = 0;
    int max, min;
    
    s.insert(s.length(), " ");
    
    while((pos = s.find(delimit)) != string::npos){
        token.push_back(stoi(s.substr(0, pos)));
        s.erase(0, pos + delimit.length());
    }
    
    sort(token.begin(), token.end());
    
    //for(const auto &s : token){
        //cout << s << endl;
    //}
    
    min = token.front();
    max = token.back();
    
    //cout << max << " " << min << endl;
    answer = to_string(min) + " " + to_string(max);
    
    return answer;
}