//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//문자 반복 출력하기
//https://school.programmers.co.kr/learn/courses/30/lessons/120825

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string temp = "";
    string answer = "";
    for(int i = 0; i < my_string.size(); i++){
        for(int j = 0; j < n; j++){
            temp[i+j] = my_string[i];
            answer.push_back(temp[i+j]);
        }
    }
    return answer;
}