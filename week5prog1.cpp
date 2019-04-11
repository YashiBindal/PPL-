#include<bits/stdc++.h>
using namespace std;
void insertstr(){
	 string str,substr,strnew;
	 cout<<"Enter a string: ";
	 cin>>str;
	 cout<<"Enter a substring: ";
	 cin>>substr;
	 int pos;
	 cout<<"Enter position for insertion: ";
	 cin>>pos;   
     strnew=str.insert(pos, substr); 
     cout<<"New string is: "<<strnew;
}
void deletestr(){
	 string str,substr,strnew;
	 cout<<"Enter a string: ";
	 cin>>str;
	 int pos;
	 cout<<"Enter position for deletion: ";
	 cin>>pos;
	 strnew=str.erase(pos);
	 cout<<"New string :"<<strnew;
}
int main()
{
	cout<<"Select operation to preform \n1.Insert substring at given position \n2.Delete string from given position\n";
	int ch;
	cin>>ch;
	switch(ch){
		case 1:
			insertstr();
			break;
		case 2:
			deletestr();
			break;
		default:
			cout<<"Enter valid selection\n";
	}
}
