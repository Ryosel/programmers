#include <vector>
#include <iostream>

using namespace std;

//프로그래머스 
//코딩테스트 연습 - 스택/큐
//같은 숫자는 싫어~~
//https://school.programmers.co.kr/learn/courses/30/lessons/12906?language=cpp

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    //첫번째 원소 arr[0]를 answer[0]에 대입
    answer.push_back(arr[0]);
    
    for(int i=1; i< arr.size(); i++){
        if(arr[i] != arr[i-1])
            answer.push_back(arr[i]);
    }

    return answer;
}