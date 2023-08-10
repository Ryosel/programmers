#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    int max_less = 0;
    int max_greater = 0;

    int size = numbers.size();
    vector<int> vector_greater = numbers;
    vector<int> vector_less = numbers;
    
    sort(vector_greater.begin(), vector_greater.end(), greater<>());
    sort(vector_less.begin(), vector_less.end(), less<>());
    
    size = numbers.size();
    
    answer = max_less = vector_less[size - 1] * vector_less[size - 2];
    max_greater = vector_greater[size - 1] * vector_greater[size - 2];
    
    if(max_greater > max_less) answer = max_greater;
    return answer;
}