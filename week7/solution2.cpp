//프로그래머스 
//코딩테스트 연습 - 2017 팁스타운
//찍지어 제거하기
//https://school.programmers.co.kr/learn/courses/30/lessons/12973?language=cpp#

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<char> str;
    int answer = 0;

    for(int i = 0; i < s.size(); i++){
        //str이 null이 아니면서 str.top()이 s[i]와 같으면
        if(str.size() != 0 && str.top() == s[i]) 
            str.pop(); //str을 pop
        
        //1) str이 null인 경우
        //2) str이 null이 아니지만 str.top()이 s[i]와 같지 않은 경우
        else 
            str.push(s[i]); //s[i]를 str에 push
    }

    if(str.empty()) //문자열이 모두 제거된 경우
        answer = 1; 
    else
        answer = 0; //문자열이 남아있지만 더 이상 중복되는 문자열 짝이 없어 문자열을 제거할 수 없는 경우
    
    return answer;
}