//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//문자열안에 문자열
//https://school.programmers.co.kr/learn/courses/30/lessons/120908

#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;

    if(str1.find(str2) != string::npos)
        answer = 1;
    else
        answer = 2;
    return answer;
}