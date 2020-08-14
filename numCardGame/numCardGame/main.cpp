#include <iostream>
#include <vector>

using namespace std;

/*
	min(), max()를 이용하면 더  쉽고 간결하게 구성가능!
	나중에 해보자
*/


int main() {
	auto low = 0;
	auto col = 0;
	vector<int> array;
	cout << "행과 열 입력 "<<endl;
	auto num = 0;
	cin >> low >> col;
	auto temp = 0;
	auto temp2 = 0;
	
	cout << "배열 입력:"<<endl;
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
		cout << i + 1 << "번재 시작" << endl;
		cout << "temp 초기화" << endl;
		temp = 10000; 

		for (int j = 0; j < col; j++) {
			cout << "현재 temp : " << temp << "  현재 array값 : " <<array.at(i+j + i*j)<< endl;

			if (array.at(i + j +i*j) <= temp) {
				temp = array.at(i + j + i*j);
				cout << "temp값 변경 : " << temp << endl;
			}

		}
		cout  << i+1<< "회차 temp : " << temp << endl;

		if (temp >= temp2) {
			temp2 = temp;
		}

	}

	cout <<endl << temp2;

	
}