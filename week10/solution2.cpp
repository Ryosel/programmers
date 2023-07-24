//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//피자 나눠 먹기 (1)
//https://school.programmers.co.kr/learn/courses/30/lessons/120814

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int pieces = 7;
    int pizzas = 0;
    
    if(n % 7 == 0)
        pizzas = n / pieces;
    else
        pizzas = (n / pieces) + 1;
    
    return pizzas;
}