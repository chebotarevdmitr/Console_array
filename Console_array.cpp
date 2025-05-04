#include <iostream>
using namespace std;

int serch(int arr[], int val,int size) {
	int ind = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i]==val)
		{
			ind = i;
		}
	}

	return ind;
}

int main()
{
	cout << "Hello dimchasic " << endl;
	const int SIZE = 10;
	int arr[SIZE] = { 7,9,4,5,3,6,9,12,10,17 };
	int index = serch(arr, 5,SIZE);
	if (index==-1)
	{
		cout << "znachenie ne nashli \n";
	}
	else
	{
		cout << "znachenie nashli " << index << endl;
	}
	return 0;
}
