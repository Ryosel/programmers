#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, m = 0;
    cin >> n >> m;
    vector<vector<int>> mat1(n, vector<int>(m, 0));    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat1[i][j];
            //cout << mat1[i][j] << " ";
        }
        //cout << "\n";
    }

    vector<vector<int>> mat2(n, vector<int>(m, 0)); 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat2[i][j];
            //cout << mat2[i][j] << " ";
        }
        //cout << "\n";
    }

    vector<vector<int>> mat_sum(n, vector<int>(m, 0)); 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            mat_sum[i][j] = mat1[i][j] + mat2[i][j];
            cout << mat_sum[i][j] << " ";
        }
        cout << "\n";
    }    
}