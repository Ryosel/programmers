//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//짝수는 싫어요
//https://school.programmers.co.kr/learn/courses/30/lessons/120813

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0)
            answer.push_back(i);
    }
    return answer;
}