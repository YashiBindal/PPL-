#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,len,flag=1;
	char a[20];
	cout<<"Enter a string: ";
	cin>>a;
	for(len=0;a[len]!='\0';++len);
	for(i=0,j=len-1;i<len/2;++i,--j)
	{
		if(a[j]!=a[i])
			flag=0;
	}
	if(flag==1)
		cout<<"The string is Palindrome"<<endl;
	else
		cout<<"The string is not Palindrome";
 
	return 0;
}
