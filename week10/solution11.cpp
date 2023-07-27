//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//옷가게 할인 받기
//https://school.programmers.co.kr/learn/courses/30/lessons/120818?language=cpp#

#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if(price >= 10 && price < 100000) 
        answer = price;
    else if(price >= 100000 && price < 300000) 
        answer = price * 0.95;
    else if(price >= 300000 && price < 500000) 
        answer = price * 0.90;
    else if(price >= 500000) 
        answer = price * 0.80;

    return answer;
}