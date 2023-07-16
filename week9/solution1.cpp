//프로그래머스 
//코딩테스트 연습 - 연습문제
//문자열 내 마음대로 정렬하기
//https://school.programmers.co.kr/learn/courses/30/lessons/12915

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;
bool compare(string a, string b){
    if(a[N] == b[N])
        return a < b;
    else
        return a[N] < b[N];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    N = n;
    sort(strings.begin(), strings.end(), compare);
    return answer = strings;
}