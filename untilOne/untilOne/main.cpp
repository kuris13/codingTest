#include <iostream>
using namespace std;



int main() {
	auto n = 0, k = 0;
	auto result = 0;
	auto target = 0;
	cout << "N�� K�� �Է� : ";
	cin >> n >> k;

	//���� ��
	//���� 1�� �� �� �� ���� ���� ������ ������ ���� �ɸ�
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
	
	//��� ��
	//���� 1�� ��ó��� ���� ������ ������ ���� �ɸ�
	while (true) {
		//������ ���� �� ���ϱ�


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