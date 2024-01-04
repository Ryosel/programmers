#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    int start = -1;
    int end = -1;
    for(int i = 0; i < arr.size(); i++){
        if(start == -1 && arr[i] == 2) start = i;
        else if(start != -1 && arr[i] == 2) end = i;
    }
    
    if(start == - 1 && end == -1) answer.push_back(-1);
    else if(start != -1 && end == -1) answer.push_back(2);
    else{
        for(int i = start; i <= end; i++)
            answer.push_back(arr[i]);
    }
    return answer;
}