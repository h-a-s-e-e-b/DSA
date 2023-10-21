#include<iostream>
using namespace std;
int main()
{
	int key;
	int a[4]={5,4,2,9};
	for(int i=1;i<=4;i++)
	{
		key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	cout<<"Array after Sorting"<<endl;
	for(int i=0;i<=3;i++)
	{
		cout<<a[i]<<" ";
	}
}
