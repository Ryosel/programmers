using System;

//프로그래머스 
//월간 코드 챌린지 시즌 2
//약수의 개수와 덧셈
//https://school.programmers.co.kr/learn/courses/30/lessons/77884
public class Solution {
    public int solution(int left, int right) {
        int answer = 0; //input들의 합
        int sum_num = 0; //약수 개수
        int input_num = 0;
        int i = 0;
        
        for(input_num = left; input_num <= right; input_num++){ //left부터 right까지
            for(i = 1; i <= input_num; i++){ //해당 input_num의 약수 확인
                if(input_num % i == 0){ //약수 개수 확인
                    sum_num++;
                }           
            }
            if(sum_num % 2 == 0){ //짝수이면 input_num을 더함
                answer += input_num;
            }
            else if(sum_num % 2 == 1){//홀수이면 input_num을 뺌
                answer -= input_num;
            }
            sum_num = 0;
        }
        return answer;
    }
}