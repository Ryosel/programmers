//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//순서쌍의 개수
//https://school.programmers.co.kr/learn/courses/30/lessons/120836

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            answer++;
    }
    return answer;
}