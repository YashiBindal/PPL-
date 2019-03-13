#include<bits/stdc++.h>
using namespace std;
int digsum(long long int num)
{
    int dig,sum=0;
   	while(num>0)
	{
		dig=num%10;
		sum=sum+dig;
		num=num/10;
	}
	return sum;	
}
int main()
{
	long long int num;
    cout<<"enter num:";
    cin>>num;
    if(num>0)
	cout<<"sum of digit is: "<<digsum(num)<<endl;
	else
    {
	cout<<"enter a positive number: "<<endl;
    cin>>num;
    cout<<"sum of digits is: "<<digsum(num)<<endl;
    }
    return 0;
}
