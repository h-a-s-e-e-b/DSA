#include<iostream>
using namespace std;
template<typename t>
	t mymax(t x,t y)
	{
		if(x>y)
		{
			return x;
		}
		else
		{
			return y;
		}
}
int main()
{
	cout<<mymax<int>(3,7)<<endl;
		cout<<mymax<float>(3.1,0.7)<<endl;
			cout<<mymax<char>('a','b')<<endl;
	
}
