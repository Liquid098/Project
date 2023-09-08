#include <iostream>

using namespace std; 

int main()
{
	float a,b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	
	float s = a * b;
	cout << "s=" << s << endl;
	float p = 2 * (a + b);
	cout << "p=" << p << endl;
	return 0;
}