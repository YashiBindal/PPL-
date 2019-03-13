#include<bits/stdc++.h>
using namespace std;
int main()
{
	float x,y;
	cout<<"Enter 2 numbers x and y: ";
	cin>>x>>y;
	float exp1,exp2;
	exp1=(x+y)/(x-y);
	exp2=(x+y)*(x-y);
	cout<<exp1<<endl<<exp2;
	return 0;
}
