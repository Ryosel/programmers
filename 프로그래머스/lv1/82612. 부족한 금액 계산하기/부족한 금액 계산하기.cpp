#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long temp = 0;
    long long total_price = 0;
    long long answer = 0;
    
    for(int i = 1; i <= count; i++){
        temp += price;
        total_price += temp;
    }
    
    if(total_price <= money) answer = 0;
    else answer = total_price - money;
    return answer;
}