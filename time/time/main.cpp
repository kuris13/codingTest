#include <iostream>
#include <string>
using namespace std;
//43��
int main() {
	auto N =0;
	cout << "N�� �Է� : ";
	cin >> N;
	auto sed = 0;
	auto min = 0;
	auto hour = 0;
	int count = 0;
	string a,b,c,A;
	//1�ð� == 60��  1��  == 60��
	// xx��.xx��.xx��


	cout << endl;
	//��
	//��
	for (int hour = 0; hour <= N; hour++) {

		//��
		for (int min = 0; min < 60; min++) {

			//��
			for (int sed = 0; sed < 60; sed++) {
				a = to_string(hour);
				
				b = to_string(min);
				
				c = to_string(sed);

				A = a + b + c;
				
				if (A.find("3") != string::npos ) {
					//cout << A <<" a : "<< a <<" b : " << b<<" c : " <<c<< endl;
					++count;
				}
				
			}
			
		}

	}
	cout << endl;
	cout << count;
}