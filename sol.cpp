#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// note: I was able to solve this problem only from observation
		// to calculate 'd', find the ceil of (n / k)
		int d = (n % k == 0 ? n / k : (n + k - 1) / k);
		// to calculate 'x', there will be two cases:
		// 1. 'n' is not divisible 'k' = store 'n' mod 'k'
		// 2. 'n' is divisible by 'k' = store 'k'
		int x = (n % k != 0 ? n % k : k);
		cout << d << " " << x << '\n';
	}
	return 0;
}
