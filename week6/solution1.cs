//���α׷��ӽ� 
//�ڵ��׽�Ʈ ���� - ��������
//�ϻ��� ��
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
            //1. �ڸ��� �� ���
            total += int.Parse(str[i].ToString());
        }

        //2. x % �ڸ��� �� ��� == 0�̸� �ϻ��� ��
        if ((x % total) == 0){
            answer = true;
        }
        else{
            answer = false;
        }
        return answer;
    }
}