#include<iostream>
using namespace std;
int myfun(int x)
{
	if(x==0||x==1)
	{
		return 1;
	}
	else
	{
		return x*myfun(x-1);
	}
}
int main()
{
	int a=5;
	int b=myfun(a);
	cout<<a<<"!="<<b;
}
