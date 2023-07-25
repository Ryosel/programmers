//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//자릿수 더하기
//https://school.programmers.co.kr/learn/courses/30/lessons/120906

#include <string>
#include <vector>

using namespace std;

int solution1(int n) {
    int answer = 0;
    string str = to_string(n);
    
    for(int i = 0; i < str.size(); i++){
        answer += int(str[i]) - 48;
    }
    return answer;
}

int solution2(int n) {
    int answer = 0;
    while(n > 0){
        answer += n % 10;
        n = n / 10;
    }  
    return answer;
}