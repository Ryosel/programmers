#include <string>
#include <vector>

using namespace std;

int GCD(int n, int m){
    int temp;
    while(m != 0){
        temp = n % m;
        n = m;
        m = temp;
    }
    return n;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = 1; //최대공약수
    int lcm = 1; //최소공배수
    
    if(m % n == 0){
        gcd = n;  
        lcm = m;
    }
    else if(m % n != 0){
        gcd = GCD(n, m);
        lcm = ((n * m) / gcd);
    }

    answer.push_back(gcd);
    answer.push_back(lcm);
        
    return answer;
}