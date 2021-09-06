#include <stdc++.h>
using namespace std;

//n입력
int n;
string plans;
int x = 1, y = 1;

//상하좌우
int dx[4] = { 0, 0 ,-1, 1 };
int dy[4] = { -1, 1, 0, 0 };
char moveTypes[4] = { 'L', 'R', 'U', 'D' };

int main() {
	cin >> n;
	cin.ignore(); // 버퍼 비우기
	
	getline(cin, plans);
	//cin >> plans ;

	for (int i = 0; i < plans.size(); i++) {
		char plan = plans[i];
		
		//이동 후 좌표 구하기
		int nx = -1, ny = -1;
		for (int j = 0; j < 4; j++) {
			if (plan == moveTypes[j]) {
				nx = x + dx[j];
				ny = y + dy[j];
			}
		}
		// 공간을 벗아니는 경우 무시
		if (nx < 1 || ny < 1 || nx  > n || ny > n) continue;
 		// 이동 수행

		x = nx;
		y = ny;
	}
	
	cout << x << ' ' << y << '\n';
	return 0;
}