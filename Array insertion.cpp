#include<iostream>
using namespace std;
int main()
{
	int element,initial_length=5;
	int arr[5]={2,7,8,1,3};
	cout<<"Array Befor Insertion"<<endl;
	for(int i=0;i<initial_length;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the item to insert in array:";
	cin>>element;
	arr[initial_length]=element;
	cout<<"Array after the insertion"<<endl;
	for(int i=0;i<initial_length+1;i++)
	{
		cout<<arr[i]<<" ";
	}
}
