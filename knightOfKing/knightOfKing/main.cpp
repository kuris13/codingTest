#include <iostream>


#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

int main() {
	
	
	string knight;
	int knightX =0;
	int knightY =0;
	int count = 0;
	
	cout << "나이트의 위치를 입력 : ;" << endl;
	cin >> knight;

	knightY = knight.at(1) - 49;
	
	switch ( static_cast<char>( knight.at(0)))
	{
	case 'a':
		knightX = 0;
		break;
	case 'b':
		knightX = 1;
		break;
	case 'c':
		knightX = 2;
		break;
	case 'd':
		knightX = 3;
		break;
	case 'e':
		knightX = 4;
		break;
	case 'f':
		knightX = 5;
		break;
	case 'g':
		knightX = 6;
		break;
	case 'h':
		knightX = 7;
		break;

	}
	
	cout << "입력 받은 좌표는 : [" << knightX + 1 << "] , [" << knightY + 1 << "]"<<endl;
	

	//if문으로 만든거 
	/*
	bool map[8][8] = { false };
	if (knightX + 2 >= 0 && knightX <= 7 && knightY + 1 >= 0 && knightY <= 7)
	{
		map[knightX + 2][knightY + 1] = true;
		cout << "[" << knightX+1 + 2 << "]" << " , " << "[" << knightY + 1 + 1 << "]" << endl;
	}
	if (knightX + 2 >= 0 && knightX <= 7 && knightY - 1 >= 0 && knightY <= 7)
	{
		map[knightX + 2][knightY - 1] = true;
		cout << "[" << knightX + 1 +2 << "]" << " , " << "[" << knightY + 1 -1 << "]" << endl;
	}


	if (knightX - 2 >= 0 && knightX <= 7 && knightY + 1 >= 0 && knightY <= 7)
	{
		map[knightX - 2][knightY + 1] = true;
		cout << "[" << knightX + 1 - 2 << "]" << " , " << "[" << knightY + 1 + 1 << "]" << endl;
	}
	if (knightX - 2 >= 0 && knightX <= 7 && knightY - 1 >= 0 && knightY <= 7)
	{
		map[knightX - 2][knightY - 1] = true;
		cout << "[" << knightX + 1 - 2 << "]" << " , " << "[" << knightY + 1 - 1 << "]" << endl;
	}


	 if (knightX + 1 >= 0 && knightX <= 7 && knightY + 2 >= 0 && knightY <= 7)
	{
		map[knightX + 1][knightY + 2] = true;
		cout << "[" << knightX + 1 + 1 << "]" << " , " << "[" << knightY + 1 + 2 << "]" << endl;
	}
	 if (knightX -1 >= 0 && knightX <= 7 && knightY +2 >= 0 && knightY <= 7)
	{
		map[knightX - 1][knightY + 2] = true;
		cout << "[" << knightX + 1 -1 << "]" << " , " << "[" << knightY + 1 +2 << "]" << endl;
	}


	 if (knightX +1 >= 0 && knightX <= 7 && knightY -2 >= 0 && knightY <= 7)
	{
		map[knightX + 1][knightY - 2] = true;
		cout << "[" << knightX + 1 +1 << "]" << " , " << "[" << knightY + 1 - 2 << "]" << endl;
	}
	 if (knightX -1 >= 0 && knightX <= 7 && knightY -2 >= 0 && knightY <= 7)
	{
		map[knightX - 1][knightY - 2] = true;
		cout << "[" << knightX + 1 - 1 << "]" << " , " << "[" << knightY + 1 -2 << "]" << endl;
	}


	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++) 
		{
			if (map[i][j] == true)
			{
				count++ ;
			}
		}
	}


	cout << count;
	*/

	//반복문과 벡터 사용
	vector<POINT> canMove = { {-2,-1} , {-2,+1} , {2,-1}, {2,+1} , {1,2},{-1,2},{1,-2},{-1,-2} };

	for (auto point : canMove)
	{
		auto X = knightX + point.x;
		auto Y = knightY + point.y;


		if (X >= 0 && X <= 7 && Y >= 0 && Y <= 7)
		{
			count++;
		}

	}

	cout << count;
}