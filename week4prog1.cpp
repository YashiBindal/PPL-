#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len;
	cout<<"Enter length of array: ";
	cin>>len;
	int ar[len];
	cout<<"Enter elements of array: ";
	for(int i=0;i<len;i++)
	cin>>ar[i];
	int large1=ar[0],large2=ar[0];
	for(int i=0;i<len;i++)
	{
           if(large1<ar[i])
			{
				large2=large1;
				large1=ar[i];
			}
			else if(large2<ar[i] && ar[i]!=large1)
			large2=ar[i];
          
	}
	cout<<"second largest element is :"<<large2;
}
