using System;

//프로그래머스 
//월간 코드 챌린지 시즌 1
//내적
//https://school.programmers.co.kr/learn/courses/30/lessons/70128
public class Solution {
    public int solution(int[] a, int[] b) {
        int answer = 0;
        
        for(int i = 0; i < a.Length; i++){
            answer += (a[i] * b[i]);
        }
        return answer;
    }
}