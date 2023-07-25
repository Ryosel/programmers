//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//특정 문자 제거하기
//https://school.programmers.co.kr/learn/courses/30/lessons/120826

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    for(char c : letter)
        my_string.erase(remove(my_string.begin(), my_string.end(), c), my_string.end());
    return my_string;
}