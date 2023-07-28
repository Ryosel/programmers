//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//세균 증식
//https://school.programmers.co.kr/learn/courses/30/lessons/120910

#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = n;
    
    for(int i = 0; i < t; i++)
        answer = answer * 2;

    return answer;
}