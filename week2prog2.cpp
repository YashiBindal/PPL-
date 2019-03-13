#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter length: ";
	cin>>n;
	int a=0,b=1,temp;
	cout<<a<<b;
	while(n>2)
	{
	 temp=a+b;
	 cout<<temp;
	 a=b;
	 b=temp;
	 n--;
	}
    return 0;	
}
