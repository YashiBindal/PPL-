#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cout<<"testcases:";
    cin>>t;
    for(int i=1;i<=t;i++){
	char n;
	cout<<"Enter any character:"<<endl;
	cin>>n;
	if(n>=65 && n<=90)
	cout<<"Capital Letter"<<endl;
	else if(n>=97 && n<=122)
	cout<<"Small Letter"<<endl;
	else if(n>=48 && n<=57) 
	cout<<"A Digit"<<endl;
    else if((n>=0 && n<=47) || (n>=58 && n<=64) || (n>=91 && n<=96) || (n>=123 && n<=127)) 
	cout<<"Special Character"<<endl;
}}
