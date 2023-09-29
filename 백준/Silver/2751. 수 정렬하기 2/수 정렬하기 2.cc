#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    
	int count = 0;
	cin >> count;
	vector<int> numbers;
	
	for (int i = 0; i < count; i++) {
		int number = 0;
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());
	
	for (int j = 0; j < numbers.size(); j++)
		cout << numbers[j] << '\n';
}