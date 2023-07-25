//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//편지
//https://school.programmers.co.kr/learn/courses/30/lessons/120898

#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int width = 2;
    int answer = 0;
    answer  = width * message.size();
    return answer;
}