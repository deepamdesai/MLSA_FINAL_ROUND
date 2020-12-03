#include <iostream>


using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	char arr[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans += (arr[i][m-1] == 'R');
	}
	for (int j = 0; j < m; j++) {
		ans += (arr[n-1][j] == 'D');
	}

	// this is an O(n+m) algorithm

	cout << ans << endl;

	return 0;
}
