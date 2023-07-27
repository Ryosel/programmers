//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//배열 자르기
//https://school.programmers.co.kr/learn/courses/30/lessons/120833

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    for(int i = num1; i <= num2; i++){
        answer.push_back(numbers[i]);
    }
    return answer;
}