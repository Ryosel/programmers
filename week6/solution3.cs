//���α׷��ӽ� 
//�ڵ��׽�Ʈ ���� - ��������
//�ﰢ���� �ϼ�����(1)
//https://school.programmers.co.kr/learn/courses/30/lessons/120889

using System;

public class Solution{
    public int solution(int[] sides){
        int max, min = 0;
        int answer = 0;

        Array.Sort(sides);
        //���� �� ���� ���̴� �ٸ� �� ���� ������ �պ��� �۾ƾ� �մϴ�.
        if (sides[0] + sides[1] > sides[2]){
            answer = 1;
        }
        else{
            answer = 2;
        }
        return answer;
    }
}