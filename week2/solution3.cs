using System;
using System.Linq;

//프로그래머스 
//코딩테스트 입문
//문자열 계산하기
//https://school.programmers.co.kr/learn/courses/30/lessons/120902
public class Solution {
    public int solution(string my_string) {
        int answer = 0;
        char[] delimiters = {' '};        
        string[] token = my_string.Split(delimiters);
        int token_length = token.Length;
        
        answer += int.Parse(token[0]);        
        for(int i = 0; i < token_length; i++){
            if(i % 2 != 0){
                if(token[i].Equals("+") || token[i].Equals("-")){
                    char op = char.Parse(token[i]);
                    Console.WriteLine("op[{0}]는 {1}\n", i, op);
                }

                if(token[i].Equals("+")){
                    answer += Convert.ToInt32(token[i + 1]);
                    Console.WriteLine("op 연산 후 answer는 {0}\n", answer);
                }
                else if(token[i].Equals("-")){
                    answer -= Convert.ToInt32(token[i + 1]);
                    Console.WriteLine("op 연산 후 answer는 {0}\n", answer);
                }                
            }
        }
    return answer;   
    }
}
