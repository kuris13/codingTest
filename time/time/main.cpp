#include <iostream>
#include <string>
using namespace std;
//43분
int main() {
	auto N =0;
	cout << "N을 입력 : ";
	cin >> N;
	auto sed = 0;
	auto min = 0;
	auto hour = 0;
	int count = 0;
	string a,b,c,A;
	//1시간 == 60분  1분  == 60초
	// xx시.xx분.xx초


	cout << endl;
	//시
	//초
	for (int hour = 0; hour <= N; hour++) {

		//분
		for (int min = 0; min < 60; min++) {

			//초
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