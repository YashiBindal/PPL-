#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,order=0,sum=0,dig; 
	cout<<"enter number:";
	cin>>num;
	int temp=num;
	while (temp) { 
        order++; 
        temp = temp/10; 
    } 

    temp=num;
	while(num)
	{
		dig=num%10;
		sum=sum+ pow(dig, order);
		num=num/10;
	}
	
	if(sum==temp)
	cout<<"Armstrog number";
	else
	cout<<"Not armstrong number";
}
