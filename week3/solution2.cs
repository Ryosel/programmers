using System;

//프로그래머스 
//코딩테스트 연습 - Summer/Winter Coding(~2018)
//예산
//https://school.programmers.co.kr/learn/courses/30/lessons/12982?language=csharp#
public class Solution {
    public int solution(int[] d, int budget) {
        int sum = 0; //합
        int arrLength = d.Length; //배열 개수
        int answer = 0; //최대 지원 가능한 부서 수
        
        Array.Sort(d);

        for(answer = 0; (sum <= budget) && (answer < arrLength); answer++){    
            if(sum + d[answer] > budget)
                break;
            
            sum += d[answer];
        }            
        return answer;
    }
}