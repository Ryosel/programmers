//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//모음 제거
//https://school.programmers.co.kr/learn/courses/30/lessons/120849

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = my_string;
    string vowels = "aeiou";
    
    for (char c: vowels)
        answer.erase(remove(answer.begin(), answer.end(), c), answer.end());
    return answer;
}