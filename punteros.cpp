#include <iostream>

using namespace std;

int main()
{
int size;

cout << "Please enter a size for the array." << endl;
cin >> size;
cout << endl;

cout << "There are " << size << " elements in this array." << endl;
cout << endl;
cout << endl;
cout << endl;

int array[size];

for (int counter = 0; counter <= size; counter++)
{
    cout << "Please enter a value for element " << counter << "." << endl;
    cin >> array[counter];
}

cout << endl;
cout << endl;


for (int counter = 0; counter <= size; counter++)
{
    cout << "Element " << counter << " is " << array[counter] << "." << endl;
    cout << endl;
}

cout << "*bing! :)" << endl;
cout << endl;


return 0;
}
