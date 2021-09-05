#include <iostream>
#include <vector>
#include <stdc++.h>

using namespace std;

int n, m, k;
vector<int> v;

int main()
{
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end()); // �Է� ���� ���� �����ϱ�
	int first = v[n - 1]; // ���� ū ��
	int second = v[n - 2]; //�� ��°�� ū ��

	//���� ū ���� �������� Ƚ�� ���
	int cnt = (m / (k + 1)) * k;
	cnt += m % (k + 1);

	int result = 0;
	result += cnt * first; // ���� ū �� ���ϱ�
	result += (m - cnt) * second; //�ι�°�� ū �� ���ϱ�

	cout << result << '\n';
}