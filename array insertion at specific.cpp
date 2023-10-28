#include<iostream>
using namespace std;
int main()
{
	int element,position,initial_length=5;
	int arr[5]={2,7,8,1,3};
	cout<<"Array Befor Insertion"<<endl;
	for(int i=0;i<initial_length;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the item to insert in array:";
	cin>>element;
	cout<<"Enter the index where you want to insert the element:";
	cin>>position;//20
	arr[position]=element;//2
	for(int i=position;i<initial_length;i++)//(i=2 2<6 2++)  
	{
		arr[i+1]=arr[i];//1=8 {2 7 20 8
	}
	cout<<"Array after the insertion"<<endl;
	for(int i=0;i<initial_length+1;i++)
	{
		cout<<arr[i]<<" ";
	}
}
