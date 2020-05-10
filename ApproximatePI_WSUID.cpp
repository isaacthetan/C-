#include <iostream>
using namespace std; 


int main() 
{
	double piSum = 0; //declare variables
	double prevPiSum = 0;
	for (int n = 0; abs(piSum - prevPiSum) > 0.0005 || n  1; n++) // create for loop, puting in abs value so that difference is meaningful
	{
		prevPiSum = piSum; // set value of prevpisum to pi sum so that when for loop resets, the prevpisum will cointain the "Previous value" 
		double nthTerm = 0; // set the nthterm as double so that trunking doesnt occur
		if (n % 2 == 0) //if placement of number is odd - , if placement of number is even + (this is not the same as the denominator) 
			nthTerm = (4/(2*(double)n+1));
		else
			nthTerm = -(4/(2*(double)n+1));
		piSum += nthTerm; //update pisum term to add the new value 
	} //after for loop condition is reached >0.0005 , execute pi sum
	cout << piSum; // print results 

		
}
