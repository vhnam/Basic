#include <iostream>
using namespace std;

int main() {
	int n, k, x, y, result;
	
	result = 0;
	
	cin >> n >> k;
	
	while (n--) {
		cin >> x >> y;
		if (x % k == 0 || y % k == 0) {
			++result;
		}
	}
	
	cout << result;
	
	return 0;
}