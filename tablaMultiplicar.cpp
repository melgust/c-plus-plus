#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main()
{
	/* initialize random seed: */
  	srand (time(NULL));
  	int firstNumber = rand() % 10 + 1;
  	int secondNumber = rand() % 10 + 1;
  	int result = firstNumber * secondNumber;
  	int response = 0;
  	do
  	{
  		cout << "Cuanto es " << firstNumber << " * " << secondNumber << ": ";
  		cin >> response;
  		if (result != response) 
		{
			cout << "Intenta de nuevo" << endl;
  		}
  		else
  		{
  			cout << "Genial eres un genio" << endl;
		}
	} while (result != response);
	return 0;
}
