#include <iostream>
#include <vector>

using namespace std;

#define MAX_SIZE 101
#define MOD 1000000007LL

long long cache[MAX_SIZE];

long long put_tile(int width) {
	if (width <= 1)
		return 1;

	long long &ret = cache[width];

	if (ret != -1)
		return ret;

	return ret = (put_tile(width - 2) + put_tile(width - 1)) % MOD;
}

int main() {
	int c;
	cin >> c;
	vector<long long> ret;
	int len;

	for (int i = 0; i < c; i++) {
		cin >> len;
		for (int j = 0; j <= len; j++) {
			cache[j] = -1;
		}
		ret.push_back((put_tile(len)));
	}

	for (int i = 0; i < ret.size(); i++)
		cout << ret[i] << endl;
}