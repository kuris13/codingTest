#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}
int main() {
	
	time_t start, end;
	double result;

	auto nSize = 0;
	auto k = 0;
	auto m = 0, m2 = 0 , m3 = 0;
	auto num=0;
	vector<int> v;
	auto vCount = 0;
	auto values = 0;
	auto temp = 0;
	auto vSave = 0;
	auto bestNum = true;
	auto selectSave = false;

	//auto first = 0;
	//auto second = 0;
	cout << "�迭�� ũ��, ���ڰ� �������� Ƚ��, ���� Ƚ�� �� �Է��ϼ���  " << endl;
	
	cin >> nSize >> m >> k;

	//m2 = m;
	//m3 = m;


	cout << "�迭 ���� �Է��ϼ���" << endl;

	for (int i = 0; i < nSize;i++) {
		//cin >> num;
		v.push_back(i);
	}

	start = clock();

	while(m > 0 ) {
		temp = 0;
		vCount = 0;

		for (auto each : v) {

			if (bestNum == false) {

				if (vCount == vSave) {
					vCount++;

					continue;
				}
			}
			if (each >= temp) {
				
				temp = each;
				if (!selectSave) {
					vSave = vCount;	//�� �� �������� �ٲ�� �ȵ�
				}
				
			}
			vCount++;

			
		}

		selectSave = true;
		
		

		

		if (bestNum == true) {

			for (int i = 0; i < k; i++) {

				if (m <= 0) {
					continue;
				}
				values += temp;
				m--;

			}
			bestNum = false;
		}
		else {
			values += temp;
			m--;
			bestNum = true;
			vCount = 0;
		}
		
		
	}
	cout << endl;
	cout << values;

	end = clock();
	result = (double)(end - start);
	cout << endl;
	cout << "�ð� ���� ���" << result << endl;
	cout << endl;

	//============================================
	/*
	values = 0;
	result = 0;
	start = clock();

	sort(v.begin(), v.end(), compare);

	first = v.at(0);
	second = v.at(1);

	while (true) {

		for (int i = 0; i < k; i++) {
			if (m2 == 0) {
				break;
			}
			values += first;
			//cout << " + " << first;
			m2 -= 1;
		}
		if (m2 == 0) {
			break;
		}
		values += second;
		//cout << " + " << second;
		m2 -= 1;
	}
	cout << endl;
	cout << values << endl;

	end = clock();
	result = (double)(end - start);
	cout << endl;
	cout << "�ð� ���� ���" << result << endl;
	cout << endl;
	*/
}