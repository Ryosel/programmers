#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<int> nums;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.insert(temp);
    }

    int m;
    cin >> m;
    for (int j = 0; j < m; j++) {
        cin >> temp;
        if (nums.find(temp) != nums.end()) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}
