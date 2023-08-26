#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int arr1_size = arr1.size();
    int arr2_size = arr2.size();
    int answer = 0;
    
    if(arr1_size < arr2_size) answer = -1;
    else if(arr1_size > arr2_size) answer = 1;
    else if(arr1_size == arr2_size){
        answer = 0;
        int arr1_total = 0;
        int arr2_total = 0;
        
        for(int i = 0; i < arr1_size; i++){
            arr1_total += arr1[i];
            arr2_total += arr2[i];
        }
        
        if(arr1_total < arr2_total) answer = -1;
        else if(arr1_total > arr2_total) answer = 1;
        else if(arr1_total == arr2_total) answer = 0;
    }

    return answer;
}