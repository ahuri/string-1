#include <iostream>
#include "String.h"
using namespace std;

void main()
{
	String mystr, mystr2;
	mystr.Assign("abc");
	mystr2.Assign("ABC");
	cout << mystr.GetLength() << endl;
	for (size_t i = 0; i < mystr.GetLength(); i++)
	{
		cout << mystr.CharAt(i) << endl;
	}
	mystr.Append(mystr2);		
	cout << mystr.GetPtr() << endl;
	cout << mystr.Compare(mystr2) << endl;
	cout << mystr.IsEmpty() << endl;
	mystr.Clear();
	cout << mystr.IsEmpty() << endl;
}
