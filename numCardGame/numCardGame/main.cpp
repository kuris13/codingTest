#include <iostream>
#include <vector>

using namespace std;

/*
	min(), max()�� �̿��ϸ� ��  ���� �����ϰ� ��������!
	���߿� �غ���
*/


int main() {
	auto low = 0;
	auto col = 0;
	vector<int> array;
	cout << "��� �� �Է� "<<endl;
	auto num = 0;
	cin >> low >> col;
	auto temp = 0;
	auto temp2 = 0;
	
	cout << "�迭 �Է�:"<<endl;
	for (int i = 0; i < low*col; i++) {
		cin >> num;
		array.push_back(num);
	}
	cout << endl;
	for (auto each : array) {
		cout << each;
	}
	cout << endl;
	for (int i = 0; i < low; i++) {
		cout << i + 1 << "���� ����" << endl;
		cout << "temp �ʱ�ȭ" << endl;
		temp = 10000; 

		for (int j = 0; j < col; j++) {
			cout << "���� temp : " << temp << "  ���� array�� : " <<array.at(i+j + i*j)<< endl;

			if (array.at(i + j +i*j) <= temp) {
				temp = array.at(i + j + i*j);
				cout << "temp�� ���� : " << temp << endl;
			}

		}
		cout  << i+1<< "ȸ�� temp : " << temp << endl;

		if (temp >= temp2) {
			temp2 = temp;
		}

	}

	cout <<endl << temp2;

	
}