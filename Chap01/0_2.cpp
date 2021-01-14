#include <iostream>

using namespace std;

/* 0.2.1 �� ������ �ּҸ� �ٴ�, ���� ���� �ٲٱ� */

void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return;
}

/* 0.2.2 �迭�� �迭�� �� ������ ��ġ�� ���ڷ� �޾Ƽ� ���� �ٲٴ� swap_arr()�Լ��� �ۼ��϶� */
void swap_arr(int arr[], int loc1, int loc2)
{
	int temp = *(arr + loc1-1);			// temp = arr[loc1-1];
	*(arr + loc1-1) = arr[loc2-1];		// arr[loc1-1] = *(arr+loc2-1);
	arr[loc2 - 1] = temp;				// arr[loc2-1] = temp;

	return;
}
int main()
{
	/* 0.2.1 �����͸� �̿��Ͽ� ���� �ٲٴ� �Լ�
	int x, y;

	cout << "Input two integer number : ";
	cin >> x >> y;

	cout << "x :" << x << ", y :" << y << endl;

	swap(&x, &y);

	cout << "x :" << x << ", y :" << y << endl;
	*/

	/* 0.2.2 �迭�� �� ���� �ٲٱ�
	int test[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;

	swap_arr(test, 3, 5);

	for (int i = 0; i < 10; i++)
	{
		cout << test[i] << " ";
	}
	cout << endl;
	*/
	return 0;

}