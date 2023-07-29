//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//제곱수 판별하기
//https://school.programmers.co.kr/learn/courses/30/lessons/120909

#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    double temp_num = sqrt((double)n);
    int square_num = (int)sqrt((double)n);
    
    if(temp_num == square_num) answer = 1;
    else answer = 2;
        
    return answer;
}