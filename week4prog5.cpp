#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter length of list: ";
	cin>>n;
	int ar[n];
	cout<<"enter elements in the list: ";
	for(int i=0;i<n;i++)
	cin>>ar[i];
	//to find frequency of all elements in the list
	sort(ar,ar+n);
	
	for(int i=0;i<n;i++)
	{   count=0;
		while(ar[i]==ar[i+1])
		{
			count++;
			i++;
		}
		cout<<"frequency of  "<<ar[i]<<" is "<<count+1<<endl;
		}
	/*int a;
	cout<<"enter element to be searched: ";
	cin>>a;
	for(int i=0;i<n;i++)
	{
		if(ar[i]==a)
		count++;
	}
	cout<<"Frequency of "<<a<<" is "<<count;*/
}
	

