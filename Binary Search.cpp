#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int temp;
	cout<<"Enter an array"<<endl;
		for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
		for(int i=0;i<5-1;i++)//0 0<4  0++
	{
		for(int j=0;j<5-i-1;j++)//0  0<4 0++ 1  1<3 1++   
		{
	
		if(arr[j]>arr[j+1])//arr[0]>arr[1]
		{
			temp=arr[j];//10
			arr[j]=arr[j+1];//10=5
			arr[j+1]=temp;//10
		}
	
	}
	}
		for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the item for search:";
	int item;
	cin>>item;
	int start=0;
	int end=4;
	int mid;
	int count=0;
		mid=(start+end)/2;
	while(start<=end)
	{
	
		if(arr[mid]==item)
		{
			count++;
		}
		else if(arr[mid]<item)
		{
			start=mid+1;
			cout<<"ccccccccccccc";
		}
		else if(arr[mid]>item)
		{
			end=mid-1;
			cout<<"hhhhhhhhhh";
		}
		start++;
	}
	if(count!=0)
{
	cout<<"item found at index:"<<mid;
}
}
