//���α׷��ӽ� 
//�ڵ��׽�Ʈ ���� - ��������
//�ݶ��� ����
//https://school.programmers.co.kr/learn/courses/30/lessons/12943

public class Solution {
    public int solution(int num) {
        long long_num = num;
        int answer = 0;
        
        //2. ����� ���� ���� ���� �۾��� 1�� �� ������ �ݺ��մϴ�.           
        while(answer < 500){
            if(long_num == 1){
                break;
            }
            else{ //num != 0�̸�
                //1-1. �Էµ� ���� ¦����� 2�� ����
                if(long_num % 2 == 0){
                    long_num = long_num / 2;
                }
                //1-2. �Էµ� ���� Ȧ����� 3�� ���ϰ� 1�� ���� 
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