#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,num2,add;
	cout<<"enter 2 numbers: ";
	cin>>num1>>num2;
	while(num2>0)
	{
		num1++;
		num2--;
	}
	cout<<"sum is:"<<num1;
	return 0;
}
