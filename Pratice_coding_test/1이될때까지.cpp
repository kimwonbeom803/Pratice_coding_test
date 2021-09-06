#include <stdc++.h>

using namespace std;

int n, k;
int result;

int main() {

	//n, k를 공백을 기준으로 구분하여 입력 받기
	cin >> n >> k;

	while (true) {
		int target = (n / k) * k;
		result += (n - target);

		n = target;

		if (n < k) break;
		result += 1;
		n /= k;
	}

	result += (n - 1);
	cout << result << '\n';
}