#include<iostream>
using namespace std;
int main()
{
	int a[2][2];
	int b[2][2];
	int add[2][2];
	cout<<"Enter the first matric:";
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	{

		cin>>a[i][j];
	}
	}
	cout<<"Enter the Second matric:";
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	{

		cin>>b[i][j];
	}
	}
	cout<<"A+B="<<endl;
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	{

		add[i][j]=a[i][j]+b[i][j];
		cout<<add[i][j]<<" ";
	}
	cout<<endl;
	}
	
}
