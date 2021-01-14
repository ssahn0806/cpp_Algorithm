#include <iostream>
#define SIZE 10
using namespace std;

/* 0.1.1  두개의 정수(int 형)를 인자로 받아서, 둘중 큰값을 반환하는 함수 max()와 둘중 작은 값을 반환하는 함수 min()을 작성해보자 */
int max(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}

int min(int num1, int num2)
{
	return num1 < num2 ? num1 : num2;
}

/* 0.1.1.a 세개의 정수(int 형)를 인자로 받아서, 그 중 최대 값을 구하는 함수를 작성하라 */
int max_three(int num1, int num2, int num3)
{
	int tempM = num1;

	if (num2 > tempM)
		tempM = num2;

	if (num3 > tempM)
		tempM = num3;

	return tempM;
}

/* 0.1.2 정수 배열에서 가장 큰 값을 반환하는 함수 max_arr()을 작성해보자. 배열과 배열의 크기를 인자로 받는다. */

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
	/* 0.1.1 최댓값과 최솟값을 구하는 함수
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

	/* 0.1.2 배열의 최댓값을 구하는 함수
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

