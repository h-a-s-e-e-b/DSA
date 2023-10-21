#include<iostream>
using namespace std;
template<class t>
class addition{
	private:
		t a,b;
		public:
			addition(t n1,t n2);
			t add();
			void show();
			
};
template<class t>
addition<t>::addition(t n1,t n2){
	a=n1;
	b=n2;	
}
template<class t>
t addition<t>::add()
{
		t c=a+b;
		return c;
}
template<class t>
void addition<t>::show()
{
		cout<<"Sum of "<<a<<" and "<<b<<" is:"<<add()<<endl;
}
int main()
{
	addition<int> obj1(10,20);
	addition<float> obj2(6.2,20);
	addition<double> obj3(6.95454,10.283374);
	obj1.show();
	obj2.show();
	obj3.show();
}
