#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter lengths of 2 array: ";
	cin>>n1>>n2;
	int ar1[n1],ar2[n2];
	cout<<"Enter elements of array 1 in sorted order: ";
	for(int i=0;i<n1;i++)
	cin>>ar1[i];
	cout<<"Enter elements of array 2 in sorted order: ";
	for(int i=0;i<n2;i++)
	cin>>ar2[i];
	int ar3[n1+n2];
	
    int a1=0,b1=0,c1=0;
    while(c1<n1+n2)
	{
		if(a1<n1 && b1<n2){
			if(ar1[a1]<=ar2[b1]){
			ar3[c1]=ar1[a1];
			a1++;
		    }
		    else{
		    	ar3[c1]=ar2[b1];
				b1++;
			}
	    }
		else if(a1==n1){
			ar3[c1]=ar2[b1];
			b1++;
	    }
	    else if(b1==n2){
	         ar3[c1]=ar1[a1];
			 a1++;	
		}
	 c1++;	
	}
		
	cout<<" Merged array is: ";
	for(int i=0;i<n1+n2;i++) cout<<ar3[i]<<" ";
}
