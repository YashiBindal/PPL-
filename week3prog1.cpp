#include<bits/stdc++.h>
using namespace std;
int main(){
	int num1,num2;
	cout<<"enter 2 numbers: ";
	cin>>num1>>num2;
	cout<<"Press 1 for addition\n Press 2 for subtraction\n Press 3 for multiplication\n Press 4 division\n Press 5 for Modulous\n"<<endl;
	int ch ;
	cout<<"enter choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"sum is "<<(num1+num2)<<endl;
			break;
		case 2:
			cout<<"substract is "<<(num1-num2)<<endl;
			break;
		case 3:
			cout<<"Multipliction is "<<(num1*num2)<<endl;
			break;
		case 4:
			cout<<"Division is "<<(num1/num2)<<endl;
			break;
		case 5:
			cout<<"Remainder is "<<(num1%num2)<<endl;
			break;
		default:
			cout<<"Make valid choice";
	}
}
