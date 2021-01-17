#include <iostream>
#include <cassert>
#define SIZE 8
using namespace std;

/* 0.4.1~2 배열로 queue 작성하기 - 크기가 8인 배열을 써서 대기번호 관리 프로그램을 작성하라 */
/*
class Queue
{
public:
	Queue();
	~Queue();
	void pop();
	void push(const int& entry);
	bool empty();
	int size() const;
	int front();
private:
	int* data;
	int start;
	int end;
	int count;
};

Queue::Queue()
{
	data = new int[SIZE];
	start = 0;
	end = SIZE - 1;
	count = 0;
}
Queue::~Queue()
{
	delete[] data;
}
void Queue::pop()
{
	if (empty())
	{
		cout << "queue empty" << endl;
		return;
	}
	start = (start + 1) % SIZE;
	count--;
	return;
}
bool Queue::empty()
{
	return count == 0;
}
int Queue::front()
{
	//assert(!empty());
	if (empty())
	{
		cout << "queue empty" << endl;
		return -1;
	}
	return data[start];
}

int Queue::size() const
{
	return count;
}

void Queue::push(const int& entry)
{
	//assert(size() < SIZE);
	if (size() >= SIZE)
	{
		cout << "queue full" << endl;
		return;
	}
	end = (end + 1) % SIZE;
	data[end] = entry;
	count++;
	return;
}
*/
/* 0.4.3 배열로 stack 작성하기 */
class Stack
{
public:
	Stack(size_t size);
	~Stack();
	void push(const int& entry);
	void pop();
	int top() const;
	bool empty() const;
	size_t size() const;

private:
	int* data;
	size_t used;
};

Stack::Stack(size_t size)
{
	data = new int[size];
	used = 0;
}

Stack::~Stack()
{
	delete[] data;
	used = 0;
}

void Stack::push(const int& entry)
{
	//assert(size() < capacity); // overflow
	data[used++] = entry;
}

void Stack::pop()
{
	assert(!empty()); // underflow
	used--;
}

int Stack::top() const
{
	assert(!empty()); // underflow
	return data[used - 1];
}

bool Stack::empty() const
{
	return used == 0;
}

size_t Stack::size() const
{
	return used;
}
/* 0.4.4 일반적인 데이터 타입을 다룰수 있도록 큐를 수정하라 */
template <class Item>
class Queue
{
public:
	Queue();
	~Queue();
	void pop();
	void push(const Item& entry);
	bool empty();
	int size() const;
	Item front();
private:
	Item* data;
	int start;
	int end;
	int count;
};

template <class Item>
Queue<Item>::Queue()
{
	data = new Item[SIZE];
	start = 0;
	end = SIZE - 1;
	count = 0;
}
template <class Item>
Queue<Item>::~Queue()
{
	delete[] data;
}
template <class Item>
void Queue<Item>::pop()
{
	if (empty())
	{
		cout << "queue empty" << endl;
		return;
	}
	start = (start + 1) % SIZE;
	count--;
	return;
}
template <class Item>
bool Queue<Item>::empty()
{
	return count == 0;
}
template <class Item>
Item Queue<Item>::front()
{
	//assert(!empty());
	if (empty())
	{
		cout << "queue empty" << endl;
		return -1;
	}
	return data[start];
}
template <class Item>
int Queue<Item>::size() const
{
	return count;
}
template <class Item>
void Queue<Item>::push(const Item& entry)
{
	//assert(size() < SIZE);
	if (size() >= SIZE)
	{
		cout << "queue full" << endl;
		return;
	}
	end = (end + 1) % SIZE;
	data[end] = entry;
	count++;
	return;
}

int main()
{
	Queue<double> q;
	double input;
	while (true)
	{
		cout << "Input number: ";
		cin >> input;
		if (input < 0)
			break;
		else if (input > 0)
		{
			q.push(input);
		}
		else
		{
			if (q.empty())
				cout << "queue empty" << endl;
			else
			{
				cout << "[" << q.front() << "]" << endl;
				q.pop();
			}
		}

	}
	return 0;
}

