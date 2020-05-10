#include <iostream> 
using namespace std; 


int main() 
{
	const int ARR_SIZE = 1000 ; //setting array size
	char inputArr[ARR_SIZE], outputArr[ARR_SIZE]; //declaring array 
	
	cout << "Enter Sentence \n"; // printing sentence
	cin.getline(inputArr, ARR_SIZE); // getline function accepts input until an enter || char limit reached (useful for sentencesssss) space is nolonger delimiter

	outputArr[0] = inputArr[0]; 
	for (int i = 1, I = 1; inputArr[i-1] != '\0'; i++) //setting forloop conditions
		if (!(inputArr[i] == ' ' && inputArr[i-1] == ' ')) // if one statement is do nothing, you can add a ! not statement , make code shorter 
			outputArr[I++] = inputArr[i];

	for(int i = 0; outputArr[i] != '\0';i++) 
		cout << outputArr[i];//outputting results
	 
	return 0;
}