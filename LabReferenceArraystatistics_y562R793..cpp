#include <iostream>
using namespace std; 

void getStats(int* arr, int size, int& max, int& min, int& average) // pointed my array , and referenced my variables // why cant i just use these variables , what would occur? 
{
	min = arr[0];  //declaring variables
	max = arr[0]; 
	average = 0; 
	int total = 0; 

	for (int i = 0; i < size;  i++) // using the for loop to determine the min and max
	{
		total += arr[i];
		min = (min > arr[i]) ? (arr[i]) : (min); //  assume that arr[0] contains the smallest variable and if it doesnt replace it with one that is 
		max = (max < arr[i]) ? (arr[i]) : (max);//  assume that arr[0] contains the largest variable and if it doesnt replace it with one that is
	}
	average = total / size;
}

int main()
{
	int min = 0, max = 0, mean = 0, size = 0, average = 0 ;
	const int size2 = 100;
	int arr[size2]; // setting array size, putting arr[100] without int will look at array spot 101

	cout << " enter the size of the array, number must be between (1-100)" << '\n';
	cin >> size;
	cout << "\n";

	for (int i = 0; i < size; i++) //storage , therefore i must be 0 , to store it in the first array slot. i in for = array slot
	{
		cout << " Enter elements" << i + 1<< ":" << endl; // print input elements 
		cin >> arr[i]; // inputs elements into array. i in array = variables in arr. 
	}
	getStats(arr,size,max,min,average); // calling function 
	cout << min << endl << max << endl << average << endl; //printing results 
		return 0;
}
	