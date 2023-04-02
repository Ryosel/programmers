using System;

//프로그래머스 
//코딩테스트 연습 - 연습문제
//문자열 다루기 기본
//https://school.programmers.co.kr/learn/courses/30/lessons/12918?language=csharp#
public class Solution {
    public bool solution(string s) {
        int length = s.Length;
        bool answer = false; //isNum
        
        if(length == 4 || length == 6){
          answer = Int32.TryParse(s, out int num);  
        }
        return answer;
    }
}