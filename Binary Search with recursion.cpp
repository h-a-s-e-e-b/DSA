#include<iostream>
using namespace std;
int myfun(int x[5],int start,int end,int item)
{
	int mid;
	if(start>end)
	{
		return 0;
	}
	else
	{
		mid=(start+end)/2;
		if(x[mid]==item)//15==20 false
		{
			return mid;
		}
		else if(item>x[mid])//15>20  false
		{
			myfun(x,mid+1,end,item);
		}
		else if(item<x[mid])//15<20
		{
				myfun(x,start,mid-1,item);
		}
		
	}
}
int main()
{
	int arr[5]={2,5,15,20,25};
	int result=myfun(arr,0,4,20);
	cout<<"Item found at index:"<<result;
}
