#include <iostream>
using namespace std; 

void getStats( int ARR_SIZE, int* valArr, int* freqArr) // array size uses pointer because it reserves the entire array memory slot(first to last slot of address), however we use references to get that specific variable.
{ //creating function to ease main code 
	
	for (int i = 0; i < ARR_SIZE; i++) // set first for loop, sends info to second loop b
	{
		int count = 0;
		for (int j = 0; j < ARR_SIZE; j++) //setting second for loop that checks all the numbers in arrays j to match with array  i then increases the count when there is simmilarity
			if (valArr[i] == valArr[j])
				count++;
		freqArr[i] = count; //updates count
	}
	
}
int main()
{
	int ARR_SIZE = 1000, valArr[20], freqArr[20], count = 0; //initializing the variables and setting array size  

	cout << "enter size of array between 1-20\n"; // determining size of array
	cin >> ARR_SIZE;

	for (int i = 0; i < ARR_SIZE; i++) // storing inputs
	{
		cout << " Enter element " << i + 1 << ": ";
		cin >> valArr[i];
	}

	getStats(ARR_SIZE,valArr,freqArr); // calling the function
	for (int i = 0; i < ARR_SIZE; i++) // 
		cout << "value: " << valArr[i] << "\tfrequency: " << freqArr[i]; // print the results

	return 0; 




	
}