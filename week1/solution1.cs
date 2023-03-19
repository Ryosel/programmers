using System;
using System.Linq;

//없는 숫자 더하기
public class Solution {
    public int solution(int[] numbers) {
        int i = 0;
        int answer = 0;

        for(i=0; i <= 9; i++){
            answer += i;
        }
        answer -= numbers.Sum();
        return answer;
    }
}