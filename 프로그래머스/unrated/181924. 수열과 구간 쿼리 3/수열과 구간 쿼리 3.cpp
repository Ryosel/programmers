#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    int idx1 = 0;
    int idx2 = 0;   
    
    for(int i = 0; i < queries.size(); i++){
        idx1 = queries[i][0];
        idx2 = queries[i][1];
        swap(answer[idx1], answer[idx2]);
    }
    return answer;
}