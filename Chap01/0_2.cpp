#include <iostream>

using namespace std;

/* 0.2.1 두 변수의 주소를 바당, 값을 서로 바꾸기 */

void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return;
}

/* 0.2.2 배열과 배열의 두 원소의 위치를 인자로 받아서 값을 바꾸는 swap_arr()함수를 작성하라 */
void swap_arr(int arr[], int loc1, int loc2)
{
	int temp = *(arr + loc1-1);			// temp = arr[loc1-1];
	*(arr + loc1-1) = arr[loc2-1];		// arr[loc1-1] = *(arr+loc2-1);
	arr[loc2 - 1] = temp;				// arr[loc2-1] = temp;

	return;
}
int main()
{
	/* 0.2.1 포인터를 이용하여 값을 바꾸는 함수
	int x, y;

	cout << "Input two integer number : ";
	cin >> x >> y;

	cout << "x :" << x << ", y :" << y << endl;

	swap(&x, &y);

	cout << "x :" << x << ", y :" << y << endl;
	*/

	/* 0.2.2 배열의 두 원소 바꾸기
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