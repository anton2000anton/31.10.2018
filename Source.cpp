#include <iostream>

using namespace std;

int InputNumber();
int InputDimension();
void NumberOfZeroes(int);
void NumberOfOnes(int);
void NumberOfZeroesInArray(int, int*);
void NumberOfOnesInArray(int, int*);


int main()
{
	int number = InputNumber();

	NumberOfZeroes(number);
	NumberOfOnes(number);
	
	int array[32];
	int dimention = InputDimension();
	InputArray(array, dimention);

	NumberOfZeroesInArray(dimention, array);
	NumberOfOnesInArray(dimention, array);
	
	system("pause");

	return 0;
}

void NumberOfZeroes(int n)
{
	int numberOfZeroes = 0;
	int remainder;
	while (n)
	{
		remainder = n % 2;
		if (remainder == 0)
		{
			numberOfZeroes++;
		}
		n /= 2;
	}
	cout << "Number of 0s in the binary system = " << numberOfZeroes << endl;
}

void NumberOfOnes(int n)
{

	int numberOfOnes = 0;
	int remainder;
	while (n)
	{
		remainder = n % 2;
		if (remainder == 1)
		{
			numberOfOnes++;
		}
		n /= 2;
	}
	cout << "Number of 1s in the binary system = " << numberOfOnes << endl;
}

int InputNumber()
{
	int n;
	cout << "Please enter an integer number:\nNumber = ";
	cin >> n;
	return n;
}

int InputDimension()
{
	int dimension;
	cout << "Please enter the dimension of the array <=32: ";
	cin >> dimension;
	while (dimension <= 0 || dimension > 32)
	{
		cout << "Invalid data!" << endl;
		cout << "Please enter the dimension of the array <=32: ";
		cin >> dimension;
	}
	return dimension;
}

void InputArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "] : ";
		cin >> array[i];
	}
}

void  NumberOfZeroesInArray(int dimention, int *array)
{
	for (int i = 0; i < dimention; i++)
	{
		cout << "Number of 0s in the [" << i + 1 << "] element in the binary system:";
		numberOfZeroes(array[i]);
	}
}

void NumberOfOnesInArray(int dimention, int*array)
{
	{
		for (int i = 0; i < dimention; i++)
		{
			cout << "Number of 1s in the [" << i + 1 << "] element in the binary system:";
			numberOfOnes(array[i]);
		}
	}
}
