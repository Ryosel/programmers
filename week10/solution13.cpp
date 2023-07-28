//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//중앙값 구하기
//https://school.programmers.co.kr/learn/courses/30/lessons/120811

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());
    int median_idx = (array.size() / 2);
    int answer = array[median_idx];
    return answer;
}