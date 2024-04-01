#include <iostream>

using namespace std;
#define fio(){ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); }

int main() {
    int n, m;
    int arr[100] = {0};
    
    fio();
    cin >> n >> m;
    for(int x = 0; x < n; x++) {
        cin >> arr[x];   
    }

	int sum = 0;
	int answer = 0;
    
	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				sum = arr[i] + arr[j] + arr[k];
				if (sum <= m && sum > answer) answer = sum;
			}
		}
	}

	cout << answer;
}