#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
     vector<int> query;
    
    for(int i = 0; i <= arr.size(); i++){
        for(int j = i; j < i+2; j++){
            query.push_back(j);
        }
        //cout << query[i] << endl;
        queries.push_back(query);
        //query.clear();
    }
    
    for(int k = 0; k < queries.size(); k++){
        cout << queries[k][0];
        cout << queries[k][1];
        cout << "\n";
    }
    return answer;
}