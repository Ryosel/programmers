//���α׷��ӽ� 
//�ڵ��׽�Ʈ ���� - ��������
//�̻��� ���� �����
//https://school.programmers.co.kr/learn/courses/30/lessons/12930
//String.Replace() : ���� ���ڿ����� �߰ߵǴ� ������ �����ڵ� ���� �Ǵ� String�� "���" ������ �ٸ� �����ڵ� ���� �Ǵ� String���� �ٲ� �� ���ڿ��� ��ȯ

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

                if (i % 2 == 0){ //i�� ¦���̸�
                    answer += Char.ToUpper(arr[i]); //i��° ���Ҹ� �빮�ڷ� ����
                }

                if (i % 2 == 1){ //i�� Ȧ���̸�
                    answer += Char.ToLower(arr[i]); //i��° ���Ҹ� �ҹ��ڷ� ����   
                }
            }
            count++;
            if (count < words.Length) //������ word�� ��� ���� �߰�X
                answer += " ";
        }
        Console.Write("answer is {0}\n", answer);
        return answer;
    }
}