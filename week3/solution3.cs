using System;

//프로그래머스 
//코딩테스트 연습 - 코딩테스트 입문
//치킨 쿠폰
//https://school.programmers.co.kr/learn/courses/30/lessons/120884?language=csharp#
public class Solution {
    public int solution(int chicken) {
        int answer = 0;
        
        while(chicken >= 10)
        {
            answer += (chicken / 10);
            chicken = (chicken / 10) + (chicken % 10);
        }     
        return answer;
    }
}