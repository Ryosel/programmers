#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    int num_size = num_list.size();
    vector<vector<int>> answer;
    vector<int> mat; 
    
    for(int i = 0; i < num_size; i++){
        for(int j = i; j < i + n; j++){
            mat.push_back(num_list[j]);
        }
        i += n - 1;
        answer.push_back(mat);
        mat.clear();
    } 
    
    return answer;
}