#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	//11 : 57 시작
	int N, M;
	
	cin >> N >> M;

	int A, B, d;
	cin >> A >> B >> d;
	
	vector<int> direction= { 0,1,2,3 };
	bool wT= true;
	int vcount = 0;
	int x;
	int map[50][50];

	//지알아서 설정된 횟수만큼의 cin이 실행되서 버퍼에 저장됨;;; 왜 이러지;;
	//저장된 버퍼에서 순서대로 출력도 됨 ...
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> x;		//버퍼에 1111이 들어감
			map[i][j] = x;
		}

	}

	//앞이 y축 뒤가 x축
	map[A][B] = 2;

	//if문으로 바꾸기 + xy축 재배열!
	while (wT) {


		switch (d)
		{
		case 0:
			d = 3;
			if (map[A - 1][B] == 0)
			{
				
				A = A - 1;
				map[A][B] = 2;
				cout << B << "," << A << "에 도착함";
				++vcount;
			}
			else if (map[A + 1][B] != 0 &&
				map[A - 1][B] != 0 &&
				map[A][B + 1] != 0 &&
				map[A][B - 1] != 0)
			{
				d = 0;
				if (map[A][B] == 1) {
					cout << "asdasdasd";
					wT = false;
					break;
				}
				B += 1;
				map[A][B] = 2;
				++vcount;
			}
			break;

		case 3:
			d = 2;
			if (map[A][B+1] == 0)
			{
				
				B = B + 1;
				map[A][B] = 2;
				cout << B << "," << A << "에 도착함";
				++vcount;
			}
			else if (map[A + 1][B] != 0 &&
				map[A - 1][B] != 0 &&
				map[A][B + 1] != 0 &&
				map[A][B - 1] != 0)
			{
				d = 2;
				if (map[A+1][B] == 0) {
					wT = false;
					break;
				}
				A+= 1;
				map[A][B] = 2;
				++vcount;
			}

			break;
		case 2:
			d = 1;
			if (map[A+1][B] == 0)
			{

				A = A + 1;
				map[A][B] = 2;
				cout << B << "," << A << "에 도착함";
				++vcount;
			}
			else if (map[A + 1][B] != 0 &&
				map[A - 1][B] != 0 &&
				map[A][B + 1] != 0 &&
				map[A][B - 1] != 0)
			{
				d = 2;
				if (map[A][B -1] == 0) {
					wT = false;
					break;
				}
				B -= 1;
				map[A][B] = 2;
				++vcount;
			}

			break;
		case 1:
			d = 0;
			if (map[A][B - 1] == 0)
			{
				B = B - 1;
				map[A][B] = 2;
				cout << B << "," << A << "에 도착함";
				++vcount;
			}
			else if (map[A + 1][B] != 0 &&
				map[A - 1][B] != 0 &&
				map[A][B + 1] != 0 &&
				map[A][B - 1] != 0)
			{
				d = 1;
				if (map[A-1][B] == 0) {
					wT = false;
					break;
				}
				A -= 1;
				map[A][B] = 2;
				++vcount;
			}

			break;
		default:
			break;
		}

	}

	cout << vcount;
}