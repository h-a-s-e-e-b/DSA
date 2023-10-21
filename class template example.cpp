#include<iostream>
using namespace std;
template<class T>
class example{
	private:
		T num1,num2;
		public:
		example(T n1,T n2)
		{
			num1=n1;
			num2=n2;
		}
		void check()
		{
			if(num1>num2)
			{
				cout<<num1<<" is greater number";
			}
			else
			{
				cout<<num2<<" is greater num";
			}
		}
};
int main()
{
	example<int> obj(10,20);
	obj.check();
}
