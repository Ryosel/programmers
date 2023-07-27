//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//중복된 숫자 개수
//https://school.programmers.co.kr/learn/courses/30/lessons/120583

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    for(int i = 0; i < array.size(); i++){
        if(array[i] == n) answer++;
    }
    return answer;
}