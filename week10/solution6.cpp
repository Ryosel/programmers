//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//최댓값 만들기(1)
//https://school.programmers.co.kr/learn/courses/30/lessons/120847

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 1;
    sort(numbers.begin(), numbers.end());
    
     for (int i = numbers.size() - 2; i < numbers.size(); i++)
        answer *= numbers[i];          
    
    return answer;
}