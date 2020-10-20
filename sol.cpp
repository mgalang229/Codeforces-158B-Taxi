#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool cmp(const int& a, const int &b) {
	return b < a;
}

void test_case() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n, cmp);
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		int sum = a[i] + a[n-1];
		if(sum <= 4) {
			ans++;
			n--;
			while(sum + a[n-1] <= 4) {
				n--;
				sum += a[n-1];
			}
		}
		else ans++;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int i = 1; i <= T; ++i) {
		//test_case();
	//}
	test_case();
	return 0;
}
