#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string num1_str = "", num2_str = "";
	cin >> num1_str >> num2_str;
	
	reverse(num1_str.begin(), num1_str.end());
	reverse(num2_str.begin(), num2_str.end());
	
	int num1 = stoi(num1_str);
	int num2 = stoi(num2_str);
	
	if (num1 > num2)
		cout << num1 << endl;
	else if (num1 < num2)
		cout << num2 << endl;

	return 0;
}