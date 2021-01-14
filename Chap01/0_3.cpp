#include <iostream>
#include <stdlib.h>
using namespace std;

/* 0.3.1 배열의 두 위치 s,t를 받아 오른쪽으로 한칸씩 이동하는 함수를 구하라*/

void right_rotate(int arr[], int s, int t)
{
	int temp = arr[t];
	int i = t;

	for (; i > s; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[i] = temp;

	return;
}

/* 0.3.1.a 배열의 두 위치 s,t를 받아 왼쪽으로 한칸씩 이동하는 함수를 작성하라*/
void left_rotate(int arr[], int s, int t)
{
	int temp = arr[s];
	int i = s;

	for (; i < t; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[i] = temp;

	return;
}

/* 0.3.1.b k를 인자로 바당서 k만큼 오른쪽으로 이동하는 함수를 작성하라
   단, k만큼 오른쪽으로 이동하는 것은 right_rotate를 반복하지 않고 수행하여야 한다*/
void right_rotate_k(int arr[], int s, int t, int k)
{
	const int size = t - s + 1; // 이동가능한 영역의 길이
	int* list;

	list = new int[size];

	copy(arr + s, arr + t+1, list); // 기존 배열[s:t+1] 복사본 생성

	if (k >= size)
	{
		k -= size;
	} // k = 0,1,2,...,size-1;

	int final_s = s + k;				//k칸 이동 후, arr[s]값의 위치
	int final_t = final_s - 1;			//k칸 이동 후, arr[t]값의 위치
	int end = size-1, start = 0;

	for (int i = final_t; i >= s; i--)
	{
		arr[i] = list[end--];
	}

	for (int i = final_s; i <= t; i++)
	{
		arr[i] = list[start++];
	}
	
	delete[] list;
}
int main()
{
	/* 0.3.1 right_rotate() 함수 작성하기
	int test[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;

	right_rotate(test, 2, 7);
	
	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;
	*/

	/* 0.3.1.a left_rotate() 함수 작성하기
	int test[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;

	left_rotate(test, 3, 8);

	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;
	*/

	/* 0.3.1.b right_rotate_k() 함수 작성하기

	int test[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;

	right_rotate_k(test, 2, 6,3);

	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;
	*/
	return 0;
}