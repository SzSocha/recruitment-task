#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c;
	string start;
	cin >> start;
	if (start == "RUN"||"run")
	{
		cout << " Lenght " << endl;
		cin >> c;
		while (c > 2 * a + b)
		{
			b++;
			if(c-a> 2 * a + b)
			{
				a++;
			}	
		}
		cout << "A=" << a << endl << "B=" << b << endl<< "a+a+b="<< 2 * a + b;
		cout << "farm area: " << a * b;
	}
	return 0;
}