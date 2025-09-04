#include<iostream>
using namespace std;

//problem6
void FillArrayWithOrderNumbers(int arr[3][3], short Rows, short cols)
{
	short counter = 0;
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < cols;j++)
		{
		counter++;

			arr[i][j] = counter;
		}
	}
}
void PrintArray(int arr[3][3], short Rows, short cols)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < cols;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout << endl;
	}
}

int main()
{
	int arr[3][3];

	FillArrayWithOrderNumbers(arr, 3, 3);

	cout << "\nThe following is a 3*3 orderd matrix:\n";
	PrintArray(arr, 3, 3);

	system("pause>0");
}


