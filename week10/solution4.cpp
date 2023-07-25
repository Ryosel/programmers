//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//점의 위치 구하기
//https://school.programmers.co.kr/learn/courses/30/lessons/120841

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    
    //x의 값이 0 초과이면 제 1 or 4 사분면
    if(dot[0] > 0){
        if(dot[1] > 0)
            answer = 1;
        else
            answer = 4;
    }  
    //x의 값이 0 미만이면 제 2 or 3 사분면
    else{
        if(dot[1] > 0)
            answer = 2;
        else
            answer = 3;
    } 
    return answer;
}