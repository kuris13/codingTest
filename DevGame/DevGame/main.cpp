#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	//11 : 57 ����
	int N, M;
	
	cin >> N >> M;

	int A, B, d;
	cin >> A >> B >> d;
	
	vector<int> direction= { 0,1,2,3 };
	bool wT= true;
	int vcount = 0;
	int x;
	int map[50][50];

	//���˾Ƽ� ������ Ƚ����ŭ�� cin�� ����Ǽ� ���ۿ� �����;;; �� �̷���;;
	//����� ���ۿ��� ������� ��µ� �� ...
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> x;		//���ۿ� 1111�� ��
			map[i][j] = x;
		}

	}

	//���� y�� �ڰ� x��
	map[A][B] = 2;

	//if������ �ٲٱ� + xy�� ��迭!
	while (wT) {


		switch (d)
		{
		case 0:
			d = 3;
			if (map[A - 1][B] == 0)
			{
				
				A = A - 1;
				map[A][B] = 2;
				cout << B << "," << A << "�� ������";
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
				cout << B << "," << A << "�� ������";
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
				cout << B << "," << A << "�� ������";
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
				cout << B << "," << A << "�� ������";
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