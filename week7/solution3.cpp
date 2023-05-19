//프로그래머스 
//코딩테스트 연습 - 연습문제
//크기가 작은 부분 문자열
//조건을 꼼꼼히 읽자.
//https://school.programmers.co.kr/learn/courses/30/lessons/147355?language=cpp

#include <string>
#include <vector>
#include <iostream>

using namespace std;
using ULL = unsigned long long;

int solution(string t, string p) {
    ULL t_length = t.length();
    ULL p_length = p.length();
    int answer = 0;
    vector<ULL> sub_str;
    
    for(int i=0; i < t_length; i++){
        if(t_length - i >= p_length){
            sub_str.push_back(stoull(t.substr(i, p_length)));
            //cout << "i is : " << i << ", sub_str[i] is : " << sub_str[i] << endl;            
        }
    }
    
    //t에서 p와 길이가 같은 '부분문자열(substring)' 중
    //이 '부분문자열(substring)'이 나타내는 수가
    //if(p가 나타내는 수보다 작거나 같으면) answer++;                      
    for(int j=0; j<sub_str.size(); j++){
        if(sub_str[j] <= stoull(p)){
            answer++;
            //cout << "p is : " << stoull(p) << ", sub_str[j] is : " << sub_str[j] << endl;     
        }
    }

    return answer;
}