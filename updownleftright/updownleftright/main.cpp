#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
/*
	�����¿�
*/
using namespace std;
int main() {
	POINT player{ 1,1 };
	int N;
	int ACount=0;
	string A;
	vector<char> inA;
	

	cout << "������ ũ�� ���� : ";
	cin >> N;
	cout << endl;
	Sleep(100);
	cin.ignore();
	cout << "��ȹ�� �ۼ� : ";
	getline(cin, A);



	for (auto each : inA) {
		cout << each << " ";
	}

	cout << endl;
	for (auto each : inA)
	{
		if (each == 'R') {
			if (player.x + 1 > N) continue;
			player.x += 1;
		}else if (each == 'L') {
			if (player.x- 1 <= 0) continue;
			player.x -= 1;
		}else if (each == 'U') {
			if (player.y - 1 <= 0) continue;
			player.y -= 1;
		}else if (each == 'D') {
			if (player.y + 1 > N) continue;
			player.y += 1;
		}
	}
	cout << endl;
	cout << "���� ���� " << player.y << " : " << player.x ;

}