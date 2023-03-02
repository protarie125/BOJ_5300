#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	for (auto i = 1; i <= n; ++i) {
		cout << i << ' ';
		if (0 == i % 6 || n == i) {
			cout << "Go! ";
		}
	}

	return 0;
}