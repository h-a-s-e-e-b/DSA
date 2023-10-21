#include<iostream>
using namespace std;
int main()
{
	int arr[5][4];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"Enter the marks of student "<<i+1<<" subject "<<j+1<<":";
			cin>>arr[i][j];
		}
		
	}
	cout<<"You entered the following numbers"<<endl;
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	aa:
	int a;
	int count=0;
	cout<<"Enter a number for search:";
	cin>>a;
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(a==arr[i][j])
			{
				cout<<"Number found at row "<<i<<" and column "<<j;
				count++;
			}
		}
	}
	if(count==0)
	{
		cout<<"number not found"<<endl;
		goto aa;
	}
}
