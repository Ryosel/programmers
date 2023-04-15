using System;

#include <vector>
#include <iostream>

using namespace std;

//프로그래머스 
//코딩테스트 연습 - 연습문제
//삼총사
//https://school.programmers.co.kr/learn/courses/30/lessons/131705


public class Solution {
    public int solution(int[] number) {
        int answer = 0;
        
        for(int i = 0; i < number.Length - 2; i++){
            Console.Write("number[" + i + "] : " + number[i] + "\n");
            
            for(int j = i+1; j < number.Length-1; j++){
                Console.Write("number[" + j + "] : " + number[j] + "\n");
                
                for(int k = j+1; k < number.Length; k++){
                    Console.Write("number[" + k + "] : " + number[k] + "\n");
                    
                    if(0==number[i] + number[j] + number[k])
                        answer++;
                }     
            }
        }
        
        return answer;
    }
}