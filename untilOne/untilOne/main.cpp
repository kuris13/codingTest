#include <iostream>
using namespace std;



int main() {
	auto n = 0, k = 0;
	auto result = 0;
	auto target = 0;
	cout << "N과 K를 입력 : ";
	cin >> n >> k;

	//나의 답
	//숫자 1을 뺄 때 한 번씩 빼기 때문에 연산이 오래 걸림
	/*
	while (true) {
		if (n == 1) break;
		if (n % k == 0) {
			n /= k;
		}
		else {
			n--;
		}
		result++;
	}
	
	*/
	
	//모범 답
	//숫자 1을 뭉처기로 빼기 때문에 연산이 조금 걸림
	while (true) {
		//나누어 지는 수 구하기


		target = (n / k) * k;
		result += n - target;
		n = target;

		if (n < k)break;

		n = n / k;
		result++;
		
	}

	result += n - 1;
	

	cout <<endl<< result;





}