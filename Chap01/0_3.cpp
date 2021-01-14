#include <iostream>
#include <stdlib.h>
using namespace std;

/* 0.3.1 �迭�� �� ��ġ s,t�� �޾� ���������� ��ĭ�� �̵��ϴ� �Լ��� ���϶�*/

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

/* 0.3.1.a �迭�� �� ��ġ s,t�� �޾� �������� ��ĭ�� �̵��ϴ� �Լ��� �ۼ��϶�*/
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

/* 0.3.1.b k�� ���ڷ� �ٴ缭 k��ŭ ���������� �̵��ϴ� �Լ��� �ۼ��϶�
   ��, k��ŭ ���������� �̵��ϴ� ���� right_rotate�� �ݺ����� �ʰ� �����Ͽ��� �Ѵ�*/
void right_rotate_k(int arr[], int s, int t, int k)
{
	const int size = t - s + 1; // �̵������� ������ ����
	int* list;

	list = new int[size];

	copy(arr + s, arr + t+1, list); // ���� �迭[s:t+1] ���纻 ����

	if (k >= size)
	{
		k -= size;
	} // k = 0,1,2,...,size-1;

	int final_s = s + k;				//kĭ �̵� ��, arr[s]���� ��ġ
	int final_t = final_s - 1;			//kĭ �̵� ��, arr[t]���� ��ġ
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
	/* 0.3.1 right_rotate() �Լ� �ۼ��ϱ�
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

	/* 0.3.1.a left_rotate() �Լ� �ۼ��ϱ�
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

	/* 0.3.1.b right_rotate_k() �Լ� �ۼ��ϱ�

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