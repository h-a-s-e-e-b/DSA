#include<iostream>
using namespace std;
int fun(int a[],int start,int end,int item)
{
	if(start>end)
	{
		return 0;
	}
	else
	{
		int mid=(start+end)/2;
		if(a[mid] == item)
		{
			return mid;
		}
		else if(item>a[mid])
		{
			return fun(a,mid+1,end,item);
		}
		else if(item<a[mid])
		{
			return fun(a,start,mid-1,item);
		}
	}
}
int main()
{
	int arr[5];
	cout<<"Enter an array"<<endl;
	for(int i=0;i<=4;i++)
	{
		cin>>arr[i];
	}
	cout<<"Entered array"<<endl;
		for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<" ";
	}
	int item;
	cout<<endl;
	cout<<"Enter an item for Search:";
	cin>>item;
	int result=fun(arr,0,4,item);
	cout<<"Item found at Position:"<<result;
	
}
