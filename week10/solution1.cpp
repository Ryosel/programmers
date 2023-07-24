//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//아이스 아메리카노
//https://school.programmers.co.kr/learn/courses/30/lessons/120819

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    int payment = 5500;
    int americanos = 0;
    int changes = 0;
    vector<int> answer;
    
    americanos = money/payment; 
    
    if(money >= 5500)
        changes = money % (payment * americanos);     
    else
        changes = money;    
    
    answer.push_back(americanos);
    answer.push_back(changes);
    return answer;
}