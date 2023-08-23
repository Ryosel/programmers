#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int arr_size = arr.size();
    
    if(arr_size % 2 != 0){
        for(int i = 0; i <= arr_size; i += 2){
            arr[i] += n;
        }
    }
    else if(arr_size % 2 == 0){
        for(int i = 1; i <= arr_size; i += 2){
            arr[i] += n;
        }        
    }
    return answer = arr;
}