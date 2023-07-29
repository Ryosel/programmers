//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//배열 두 배 만들기
//https://school.programmers.co.kr/learn/courses/30/lessons/120809

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for(int i = 0; i < numbers.size(); i++)
        answer.push_back(numbers[i] * 2);
    return answer;
}