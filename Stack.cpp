#include<iostream>
using namespace std;
template<class T>
class StackType{
	public:
		StackType(int);
		~StackType();
		bool isEmpty() const;
		bool isFull()  const;
		T Top() const;
		void Push(T);
		void Pop();
		private:
			int top, maxStack;
			T *items;
};
template<class T>
StackType<T>::StackType(int size)
{
	top=-1;
	maxStack=size;
	items=new T[maxStack];
}
template<class T>
StackType<T>::~StackType()
{
	delete[]items;
}
template<class T>
bool StackType<T>::isEmpty() const
{
	return (top==-1);
}
template<class T>
bool StackType<T>::isFull() const
{
	return (top==maxStack);
}
template<class T>
void StackType<T>::Push(T newitem)
{
	top++;
	items[top]=newitem;
}
template<class T>
void StackType<T>::Pop()
{
	top--;
}
template<class T>
T StackType<T>::Top() const
{
	return items[top];
}

int main()
{
	StackType<int>obj(3);
if(!obj.isFull())
	{
	obj.Push(22);
	obj.Push(23);
	obj.Push(24);
}
else 
{
	cout<<"Stack is ful";
}
if(!obj.isEmpty())
{
int topitem=obj.Top();
cout<<"Top element:"<<topitem<<endl;
obj.Pop();
topitem=obj.Top();
cout<<"Top element after pop:"<<topitem<<endl;
}
else
{
	cout<<"Stack is empty.Cannot get the top element."<<endl;
}
}
