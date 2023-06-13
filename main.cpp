#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n, c;
vi times;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n >> c;
	times = vi(n);
	for (auto&& x : times) {
		cin >> x;
	}

	auto ans = int{ 0 };
	for (auto i = 1; i <= c; ++i) {
		for (const auto& x : times) {
			if (0 == i % x) {
				++ans;
				break;
			}
		}
	}

	cout << ans;

	return 0;
}