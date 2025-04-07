#include <iostream>
using namespace std;

int main(){
    int num; 
    cin >> num;

    int arr[num];
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }     

    int v;
    int cnt = 0;
    cin >> v;
    
    for(int j = 0; j < num; j++){
        if(arr[j] == v) cnt++;
    }

    cout << cnt;
    return 0;
}