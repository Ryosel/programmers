#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int max = 0; //최대
    int min = 0; //최소

    if(m % n == 0){ max = m; min = n; }
    else if(m % n != 0){ max = m * n; min = 1; }
    
    answer.push_back(min);
    answer.push_back(max);
    return answer;
}