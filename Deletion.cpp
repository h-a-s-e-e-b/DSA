#include<iostream>
using namespace std;
int main()
{
	int position,initial_length=5;
	int arr[5]={2,7,8,1,3};
	cout<<"Array Before Deletion"<<endl;
	for(int i=0;i<initial_length;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the position:";
	cin>>position;//2
	for(int i=position;i<initial_length;i++)//i=2 i<5 2++
	{
		arr[i]=arr[i+1];//arr[1]=arr[2];  2 8 1 3 
		//4
	}
	initial_length--;
	cout<<"Array after the Deletion"<<endl;
	for(int i=0;i<initial_length;i++)
	{
		cout<<arr[i]<<" ";
	}
}
