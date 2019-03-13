#include<bits/stdc++.h>
using namespace std;
void digsum()
{   
    long long int num;
	int dig,sum=0,count=0;
    cout<<"enter 3 digit num:";
    cin>>num;
   	while(num!=0)
	{
		dig=num%10;
		sum=sum+dig;
		num=num/10;
		count++;
	}
	if(count==3)
	cout<<"sum of digit is: "<<sum<<endl;
	else
	{
     digsum();
    }
}
int main()
{
	digsum();
	return 0;
}
