//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//피자 나눠 먹기 (3)
//https://school.programmers.co.kr/learn/courses/30/lessons/120816

#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    
    if(n % slice == 0)
        answer = n / slice;
    else
        answer = (n / slice) + 1;

    return answer;
}