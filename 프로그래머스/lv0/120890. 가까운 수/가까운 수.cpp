#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0]; //assign to first element of vector to find the nearest num
    sort(array.begin(), array.end(), less<>());
    
    for(int i = 0; i < array.size(); i++){
        if(abs(n - answer) > abs(n - array[i])){
            answer = array[i];
        }
        else if(abs(n - answer) == abs(n - array[i])){
            if(answer > array[i]) answer = array[i];
        }
    }
    return answer;
}