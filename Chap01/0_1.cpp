#include <iostream>
#define SIZE 10
using namespace std;

/* 0.1.1  �ΰ��� ����(int ��)�� ���ڷ� �޾Ƽ�, ���� ū���� ��ȯ�ϴ� �Լ� max()�� ���� ���� ���� ��ȯ�ϴ� �Լ� min()�� �ۼ��غ��� */
int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

int min(int num1, int num2)
{
	return num1 < num2 ? num1 : num2;
}

/* 0.1.1.a ������ ����(int ��)�� ���ڷ� �޾Ƽ�, �� �� �ִ� ���� ���ϴ� �Լ��� �ۼ��϶� */
int max_three(int num1, int num2, int num3)
{
	int tempM = num1;

	if (num2 > tempM)
		tempM = num2;

	if (num3 > tempM)
		tempM = num3;

	return tempM;
}

/* 0.1.2 ���� �迭���� ���� ū ���� ��ȯ�ϴ� �Լ� max_arr()�� �ۼ��غ���. �迭�� �迭�� ũ�⸦ ���ڷ� �޴´�. */

int max_arr(int arr[], size_t size)
{
	int tempM = arr[0];

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > tempM)
			tempM = arr[i];
	}

	return tempM;
}
int main()
{
	/* 0.1.1 �ִ񰪰� �ּڰ��� ���ϴ� �Լ�
	int num1, num2;
	int M, m;
	cout << "Input two integer numbers :";
	cin >> num1 >> num2;

	M = max(num1, num2);
	m = min(num1, num2);

	cout << "Max : " << M << ", min : " << m << endl;
	*/

	/* 0.1.1.a 
	int num1, num2, num3;
	int M, m;


	cout << "Input three integer numbers :";
	cin >> num1 >> num2 >> num3;

	M = max_three(num1, num2, num3);

	cout << "Max : " << M << endl;
	*/

	/* 0.1.2 �迭�� �ִ��� ���ϴ� �Լ�
	int test[SIZE];
	int M;
	cout << "Input ten integer numbers :";

	for (int i = 0; i < SIZE;i++)
	{
		cin >> test[i];
	}

	M = max_arr(test, SIZE); // SIZE = sizeof(test)/sizeof(*test);

	cout << "Max : " << M << endl;
	*/
	return 0;
}

