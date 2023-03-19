using System;

//머쓱이보다 키 큰 사람
public class Solution {
    public int solution(int[] array, int height) {
        int i = 0;
        int answer = 0;
        
        for(i=0; i < array.Length; i++){
            if(height < array[i]){
                answer++;
            }
        }
        return answer;
    }
}