#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
     if(n==0)
     return 1;
	 return(n*fact(n-1));
}
int main()
{
    int x;
    cout<<"Enter x:";
	cin>>x;
	double sum=0;
	sum=1 - pow(x,2) /fact(2) + pow(x,4)/fact(4) - pow(x,6) /fact(6) +pow(x,8) /fact(8) - pow(x,10)/fact(10);
	cout<<"sum is: "<<sum;

}
