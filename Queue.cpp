#include<iostream>
using namespace std;
template <class T>
class Queue
{
	public:
	Queue(int);
	
	~Queue();
	
	void MakeEmpty();
	
	bool IsEmpty() const;
	
	bool IsFull() const;
	
	void Enqueue(T);
	
	void Dequeue();
	
	T peek();
	
	void Display();
	
	private:
		int rear,front;
		
		T *items;
		
		int maxQue;
};
template <class T>
Queue<T>::Queue(int max)
{
	maxQue=max;
	front=-1;
	rear=-1;
	items=new T[maxque];
}
template <class T>
Queue<T>::~Queue()
{
	delete items[];
}
template <class T>
void Queue<T>::MakeEmpty()
{
	front=-1;
	rear=-1;
}
template <class T>
bool Queue<T>::IsEmpty() const
{
	return (front==-1);
}
template <class T>
bool Queue<T>::IsFull() const
{
	return 	(rear==maxQue-1);
}
template <class T>

void Queue<T>::Enqueue(	T)
{
	if (front == -1)
	front = 0;
 rear = rear + 1;
 cout<<"Rear = "<<rear<<endl;
 items[rear] = newItem;

}
template <class T>
void Queue<T>::Dequeue()
{
	front = front + 1;
}
T Queue<T>::peek()
{
	return items[front];
}
template <class ItemType>
void QueueType<ItemType>::Display()
{
if (IsEmpty())
{
        cout << "Empty Queue"<<endl;
        return;
}
if (IsFull())
 {
        cout << "Full Queue"<<endl;
         return;
  }  

int main()
{
	
}
