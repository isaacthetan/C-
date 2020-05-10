#include <iostream> 
using namespace std; 












//	int main() // alis code
//{
//	const int WORD_LIMIT = 100;
//	string inputSentence[WORD_LIMIT], outputSentence[WORD_LIMIT];// array of characters -> array of strings
//	int wordCount = 0;
//	cout << "Enter your sentence: ";
//	for (int i = 0; cin.peeP() != '\n'; i++, wordCount++)
//		cin >> inputSentence[i];
//	for (int i = 0; i <= wordCount; i++)
//		outputSentence[wordCount - i] = inputSentence[i];//i = string, not character 
//	for (int i = 0; i < WORD_LIMIT ; i++)
//		cout << outputSentence[i] << ' ';
//
//	return 0;
//}



	int main()
	{
		const int ARRAY_SIZE = 1001;
		char InputArray[ARRAY_SIZE]; //declaring input string
		cin.getline(InputArray, ARRAY_SIZE); // inserting string into a one dimensional array

		char twoDim[30][20];

		int P = 0, i;
		for (i = 0; i < 30; i++) {
			for (int L = 0; L < 20; L++)
			{
				if (InputArray[P] == ' ') 
				{
					twoDim[i][L] = '\0';
					P++;
					break;
				}
				else
				twoDim[i][L] = InputArray[P];// moving one dimensional characters into the two dimensional array

				if (InputArray[P] == '\0')
					goto exit;
				P++;
			}
		}
	exit:

		for (int a = i; a >= 0; a--)
		{
			cout << twoDim[a] << ' ';
		}

		return 0;
	}

	

