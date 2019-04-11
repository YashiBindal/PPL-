#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter a String: ";
	string str;
	getline(cin,str);
	cout<<"Enter the substr to find: ";
	string sub;
	cin>>sub;
	int indx=str.find(sub);
	if(indx==string::npos) cout<<"1";
	else cout<<"Index of substring beginning: "<<indx;
}
