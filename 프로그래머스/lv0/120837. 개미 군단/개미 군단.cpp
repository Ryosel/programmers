#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int hp) {
    int armyStr = 5, soldierStr = 3, ergateStr = 1;
    int armyCnt = 0, soldierCnt = 0, ergateCnt = 0;
    int remainHp = 0;
    int answer = 0;
    
    if(hp != 0){
        armyCnt = hp / armyStr;   
        remainHp = hp - (armyStr * armyCnt);
        
        if(remainHp != 0){
            soldierCnt = remainHp / soldierStr;  
            remainHp = remainHp - (soldierStr * soldierCnt);
            
            if(remainHp != 0) ergateCnt = remainHp / ergateStr;
        }
    }            

    answer = armyCnt + soldierCnt + ergateCnt;
    return answer;
}