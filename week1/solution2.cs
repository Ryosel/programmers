using System;

//음양 더하기
public class Solution {
    public int solution(int[] absolutes, bool[] signs) {
    int i = 0;
    int answer = 0;
        
        for(i=0; i < absolutes.Length; i++){
            if(!signs[i]){
                answer += -absolutes[i];   
            }
            else{
                answer += absolutes[i]; 
            }
        }
    return answer;
    }
}