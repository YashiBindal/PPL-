#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n: ";
	cin>>n;
	cout<<2<<" ";
	for(int i=3;i<=n;i++)
	{  int f=0;
	  for(int j=2;j<=i/2;j++)
	  {
	  	if(i%j==0) 
	  	f=1;
	  }
	  if(f==0)
	  cout<<i<<" ";	
	}
	return 0;
}
