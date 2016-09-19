#include <iostream>
using namespace std;

//given a list of number determine the biggest
//and smallest value

//1. need a variable to store the biggest number
//2. initialize biggest value
//	- first value in the array

int main()
{
	//int ourArray[10] = { 50, -10, 4, 51, -69, 96, -97, 11, 3, 47 };

	////choose how to initialize Biggest variable
	////int Biggest = ourArray[0];
	//int Biggest = INT_MIN;
	//int Smallest = INT_MAX;
	//int locationS = -1;
	//int locationB = -1;

	////loop the array
	////if the array value is bigger than Biggest
	////store the array value as new Biggest

	//for (int x = 0; x <= 9; x++)
	//{
	//	if (ourArray[x] >= Biggest)
	//	{
	//		Biggest = ourArray[x];
	//		locationB = x;
	//	}
	//	if (ourArray[x] <= Smallest)
	//	{
	//		Smallest = ourArray[x];
	//		locationS = x;
	//	}
	//}


	//cout << "Biggest: " << Biggest << endl;
	//cout << "Smallest: " << Smallest << endl;
	//cout << "Indxex " << locationB << " holds the biggest number." << endl;
	//cout << "Index " << locationS << " holds the smallest number." << endl;

	//Reverse the array
	int iSize;
	cout << "Enter the size of the array: ";
	cin >> iSize;

	//declare a dynamic array based on size
	int myArray[];

	//loop through our array
	for (int i = 0; i < iSize; i++)
	{
		//store every number between 0 and iSize in our array
		cin >> myArray[i];


		//TEST to see if numbers are stored in array;
		cout << myArray[i] << ' ' << endl;
	}

	



	return 0;
}