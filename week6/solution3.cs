//프로그래머스 
//코딩테스트 연습 - 연습문제
//삼각형의 완성조건(1)
//https://school.programmers.co.kr/learn/courses/30/lessons/120889

using System;

public class Solution{
    public int solution(int[] sides){
        int max, min = 0;
        int answer = 0;

        Array.Sort(sides);
        //가장 긴 변의 길이는 다른 두 변의 길이의 합보다 작아야 합니다.
        if (sides[0] + sides[1] > sides[2]){
            answer = 1;
        }
        else{
            answer = 2;
        }
        return answer;
    }
}