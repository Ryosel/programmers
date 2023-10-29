#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {  
    for(int p = 0; p < queries.size(); p++){
        for(int q = queries[p][0]; q <= queries[p][1]; q++) 
            arr[q] += 1;
    }
    return arr;
}