#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<float> prev_scores = {};
	float max_score = 0;
	float new_average = 0;

	int sub_count = 0;
	cin >> sub_count;
	
	for (int i = 0; i < sub_count; i++) {
		int score;
        cin >> score;
        prev_scores.push_back(score);
	}

	sort(prev_scores.begin(), prev_scores.end());
	max_score = prev_scores.back();
	
	for (int j = 0; j < sub_count; j++) {
		new_average += prev_scores[j] / max_score * 100; //prev_score / max_score * 100;
	}
	new_average = new_average / sub_count;

	cout << new_average;
	return 0;
}