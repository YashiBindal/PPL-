#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len;
	cout<<"Enter length of array:";
	cin>>len;
	int ar[len];
	cout<<"Enter elements of array: ";
	for(int i=0;i<len;i++)
	cin>>ar[i];
	vector <int> pos;
	vector <int> neg;
	vector <int> even;
    vector <int> odd;
	for(int i=0;i<len;i++)
	{
		if(ar[i]%2==0 && ar[i]>=0){
		even.push_back(ar[i]);
        pos.push_back(ar[i]);
		}
		else if((ar[i]%2)!=0 && ar[i]>=0){
		odd.push_back(ar[i]);
		pos.push_back(ar[i]);
		}
		else if(ar[i]%2==0 && ar[i]<0){
		even.push_back(ar[i]);
        neg.push_back(ar[i]);
		}
        else if((ar[i]%2)!=0 && ar[i]<0){
		odd.push_back(ar[i]);
		neg.push_back(ar[i]);
		}
	}
	cout<<pos.size()<<" positive numbers viz: ";
	for(int i=0;i<pos.size();i++) cout<<pos[i]<<" ";
	cout<<endl;
	cout<<neg.size()<<" negative numbers viz: ";
	for(int i=0;i<neg.size();i++) cout<<neg[i]<<" ";
	cout<<endl;
	cout<<even.size()<<" even numbers viz: ";
	for(int i=0;i<even.size();i++) cout<<even[i]<<" ";
	cout<<endl;
	cout<<odd.size()<<" odd numbers viz: ";
	for(int i=0;i<odd.size();i++) cout<<odd[i]<<" ";
	cout<<endl;
}
