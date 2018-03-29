//Armando Torres-Cornejo
//CPSC 121 Lab 6
//<03/28/2018>

#include "stdafx.h"
#include <iostream>
#include <random>
using namespace std;

int arr[10];// global array size 

void getarrval();//function prototypes
void getRandVal();
void getRandRangedVal();
void bubbleaccend();
void bubbledescend();
void selectaccend();
void selectdescend();
void display();

void main()
{
	char ans;
	do
	{//user options 
		cout << "Would you like to " << endl;
		cout << "a)  input values " << endl;
		cout << "b)  provide a range for randomly generated values to fill the array" << endl;
		cout << "c)  use the default range for random values " << endl;
		cin >> ans;
		if (ans == 'a')//user input
		{
			getarrval();
		}
		if (ans == 'b')//ranged input
		{
			getRandRangedVal();
		}
		if (ans == 'c')//computer generated values
		{
			getRandVal();
		}
		cout << "Your array values are:" << endl;//displaying values
		display();
		cout << "Would you like to sort the array ascending or decending? ('a' or 'd')" << endl;//user sorting choice
		cin >> ans;
		if (ans=='a')
		{
			cout << "would you like to use bubble or selection sort? ('b' or 's')" << endl;
			cin >> ans;
			if (ans == 'b')
			{
				bubbleaccend();
			}
			if (ans=='s')
			{
				selectaccend();
			}
		}
		if (ans == 'd')
		{
			cout << "would you like to use bubble or selection sort? " << endl;
			cin >> ans;
			if (ans == 'b')
			{
				bubbledescend();
			}
			if (ans == 's')
			{
				selectdescend();
			}
		}
		display();
		cout << "Would you like to rerun the program" << endl;
		cin >> ans;
	} while (ans == 'y');
}

void getarrval() //gets values from user
{
	cout << "Please enter 10 intergers" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a number: ";
		cin >> arr[i];
	}

}

void getRandVal()// gets a random values 
{
	default_random_engine randomGenerator;
	uniform_int_distribution<int>randomArr(1, 100);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = randomArr(randomGenerator);
	}
}

void getRandRangedVal()
{
	int max, min;
	cout << "Enter the minimum value" << endl;
	cin >> min;
	cout << "Enter the maximum value" << endl;
	cin >> max;
	default_random_engine randomGenerator;
	uniform_int_distribution<int>randomArr(min, max);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = randomArr(randomGenerator);
	}
}

void bubbleaccend()//sorting functions
{
	int hold;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				hold = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = hold;
			}
		}
	}
}

void bubbledescend()
{
	int hold;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				hold = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = hold;
			}
		}
	}
}

void selectaccend()
{
	int t;
	for (int i = 0; i<10; i++)
	{
		for (int j = i + 1; j<10; j++)
		{
			if (arr[j]<arr[i]) 
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}

void selectdescend()
{
	int t;
	for (int i = 0; i<10; i++)
	{
		for (int j = i + 1; j<10; j++)
		{
			if (arr[j]>arr[i])  
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
}

void display()
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}