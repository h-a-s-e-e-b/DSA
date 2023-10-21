#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the "<<i+1<<" number:";
		cin>>arr[i];
	}
	cout<<"Number you enter are:";
	for(int i=0;i<5;i++)
	{
		
		cout<<arr[i]<<"\t";
	
	}
	cout<<endl;
	int a;
	int count=0;
	aa:
	cout<<"Enter a number for search:";
	cin>>a;
	for(int i=0;i<5;i++)
	{
		
		if(a==arr[i])
		{
			cout<<"Number found at index "<<i;
			count++;
		}
	
	}
	if(count==0)
	{
		cout<<"number not found"<<endl;
		goto aa;
	}
	
	
}
