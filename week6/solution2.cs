//프로그래머스 
//코딩테스트 연습 - 연습문제
//콜라츠 추측
//https://school.programmers.co.kr/learn/courses/30/lessons/12943

public class Solution {
    public int solution(int num) {
        long long_num = num;
        int answer = 0;
        
        //2. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.           
        while(answer < 500){
            if(long_num == 1){
                break;
            }
            else{ //num != 0이면
                //1-1. 입력된 수가 짝수라면 2로 나눔
                if(long_num % 2 == 0){
                    long_num = long_num / 2;
                }
                //1-2. 입력된 수가 홀수라면 3을 곱하고 1을 더함 
                else{
                    long_num = (long_num * 3) + 1;
                }
                answer++;
            }            
        }
        if(answer == 500)
            answer = -1;
        
        return answer;
    }
}