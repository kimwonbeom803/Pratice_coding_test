#include <iostream>

using namespace std;

int n = 18420;
int cnt = 0;
int cointype[4] = { 500 , 100 , 50, 10 };

int main()
{
    for (int i = 0; i < 4; i++) {
        int coin = cointype[i];
        cnt += n / coin;
        n %= coin;
    }
    cout << cnt << '\n';
}
