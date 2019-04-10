#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a,b,c;
	cout << "Enter values for a, b and c: ";
	cin >> a >> b >> c;
    int desc = (b*b) - (4*a*c);
    if(desc==0)
    {
    	cout << "Real and Equal Roots: ";
        cout << "x = " << -b/(2*a)<<endl;
	}
	else if(desc>0)
	{
		cout << "Real and Different Roots\n";
        cout << "x1 = " << (-b+sqrt(desc))/(2*a) << "\tx2 = " << (-b-sqrt(desc))/(2*a);
	}
	else
	{
		cout << "Imaginary Roots:\n";
	    cout << "x1 = " << -b/ (2*a) << "+" << sqrt(-desc)/(2*a)<< "i"<<endl;
	    cout << "x2 = " << -b/ (2*a) << "-" << sqrt(-desc)/(2*a)<< "i";
	}
}
