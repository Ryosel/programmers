#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int arr_size = arr.size();
    int temp = 0;
    int answer = 0;
    
    for(int i = 0; i < arr_size; i++){
        for(int j = 0; j < arr[i].size(); j++){
            if(arr[i][j] == arr[j][i]) temp++;
        }
    }
    
    if(temp == arr_size * arr_size) answer = 1;
    return answer;
}