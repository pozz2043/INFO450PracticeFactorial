#include <iostream>
using namespace std;


int main()
{
	int value = 0;
	char answer;
	int getValue();
	void showfac(int input);
	do
	{
		value = getValue(); //function (getting input) call
		cout << "the value you enterred is " << value << endl;

		showfac(value); //call the func (get& show fact)
		cin.get();
		cout << "another try ? enter Y or y : ";
		cin >> answer;
	} while ((answer == 'Y') || (answer == 'y'));
	
	return 0;
}
int getValue() //getting input value and return it
{
	int v;
	cout << "Please enter a an integer number :";
	cin >> v;
	return v;

}
void showfac(int input) //receive input value(initial input) and printout&compute in same time.
{
	int a;
	int result = 1;
	cout << input <<"! = ";
	for(a=input; a>0;a--)
	{
		result = result * a;
		if (a == 1)
			cout << a << " ";
		else
			cout << a << " X ";
	}
	cout << endl;
	cout << "Result = " << result << endl;
	return; 

}