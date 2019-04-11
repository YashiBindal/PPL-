#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Enter the value of row and column for Matrix 1: ";
	int m1,n1,m2,n2;
	cin>>m1>>n1;
	int mat1[m1][n1];
	cout<<"Enter data of Matrix 1: "<<endl;
	for(int i=0;i<m1;i++){
		for(int j=0;j<n1;j++) cin>>mat1[i][j];
	}
	cout<<"Enter the value of row and column for Matrix 2: ";
	cin>>m2>>n2;
	int mat2[m2][n2];
	cout<<"Enter data of Matrix 2: "<<endl;
	for(int i=0;i<m1;i++){
		for(int j=0;j<n1;j++) cin>>mat2[i][j];
	}
	int add[m1][n1];
	int mul[m1][n2];
	cout<<"Select the Operation- "<<endl;
	cout<<"1. Addition of Matrices."<<endl<<"2. Multiplication of Matrices."<<endl;
	cout<<"Your Choice: ";
	int ch;
	cin>>ch;
	switch(ch){
		case 1:
			if(m1==m2 && n1==n2){
				for(int i=0;i<m1;i++){
					for(int j=0;j<n1;j++) add[i][j]=mat1[i][j]+mat2[i][j];
				}
				cout<<"Addition of Matrices is: "<<endl;
				for(int i=0;i<m1;i++){
					for(int j=0;j<n1;j++) cout<<add[i][j]<<" ";
					cout<<endl;
				}	
			}
			else cout<<"Dimension of Matrices are Not same.";
			break;
		case 2:
			if(n1==m2){
				for(int i=0;i<m1;i++){
					for(int j=0;j<n2;j++){
						mul[i][j]=0;
						for(int k=0;k<m1;k++) mul[i][j]+=mat1[i][k]*mat2[k][j];
					}
				}
				cout<<"Multiplication of Matrices is: "<<endl;
				for(int i=0;i<m1;i++){
					for(int j=0;j<n1;j++) cout<<mul[i][j]<<" ";
					cout<<endl;
				}
			}
			else cout<<"Multiplication not possible";
			break;
	}
	
}	

