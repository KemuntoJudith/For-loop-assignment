// For loop assignment
//Admission: 147683

#include <iostream>
using namespace std; 

//Using the for loop, write a program that outputs the numbers: 12,14,16,18,20,22,24,26,28

int main()
{
	//Variable declaration and initialization
	for (int num = 12; num <= 28; ++num)
	{
		if (num % 2 == 0)   //To only display the numbers listed, which are even numbers thus divisible by 2
		{
			cout << "" << num << endl;
		}
	}

	return 0; 
}
