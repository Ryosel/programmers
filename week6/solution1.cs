//프로그래머스 
//코딩테스트 연습 - 연습문제
//하샤드 수
//https://school.programmers.co.kr/learn/courses/30/lessons/12947

public class Solution
{
    public bool solution(int x)
    {
        bool answer = false;
        string str = x.ToString();
        int parse_num = 0;
        int total = 0;

        for (int i = 0; i < str.Length; i++){
            //1. 자릿수 합 계산
            total += int.Parse(str[i].ToString());
        }

        //2. x % 자릿수 합 계산 == 0이면 하샤드 수
        if ((x % total) == 0){
            answer = true;
        }
        else{
            answer = false;
        }
        return answer;
    }
}