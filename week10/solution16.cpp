//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//배열의 유사도
//https://school.programmers.co.kr/learn/courses/30/lessons/120903

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(int i = 0; i < s1.size(); i++){
        auto it = find(s2.begin(), s2.end(), s1[i]);
        
        if(it != s2.end()) //같은 원소가 아닐 경우 find()는 s2.end를 가리키는 iterator를 return하므로
            answer++;
    }
    return answer;
}