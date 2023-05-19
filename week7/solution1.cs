//프로그래머스 
//코딩테스트 연습 - 연습문제
//이상한 문자 만들기
//https://school.programmers.co.kr/learn/courses/30/lessons/12930
//String.Replace() : 현재 문자열에서 발견되는 지정된 유니코드 문자 또는 String을 "모두" 지정된 다른 유니코드 문자 또는 String으로 바꾼 새 문자열을 반환

using System;

public class Solution{
    public string solution(string s){
        int count = 0;
        string answer = "";

        Console.Write("string is {0}\n", s);

        string[] words = s.Split(" ");
        string word = "";

        foreach (string arr in words){
            Console.Write("arr is {0}\n", arr);
            word = arr;
            Console.Write("word is {0}\n", word);

            for (int i = 0; i < arr.Length; i++){
                Console.Write("arr[{0}] is {1}\n", i, arr[i]);

                char c = arr[i];
                Console.Write("c is {0}\n", c);

                if (i % 2 == 0){ //i가 짝수이면
                    answer += Char.ToUpper(arr[i]); //i번째 원소를 대문자로 변경
                }

                if (i % 2 == 1){ //i가 홀수이면
                    answer += Char.ToLower(arr[i]); //i번째 원소를 소문자로 변경   
                }
            }
            count++;
            if (count < words.Length) //마지막 word일 경우 공백 추가X
                answer += " ";
        }
        Console.Write("answer is {0}\n", answer);
        return answer;
    }
}