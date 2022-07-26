#include <iostream>
#include <cassert>

using namespace std;

template<typename T>
class Queue
{
private:
	template<typename T1>
	class Node
	{
	public:
		T1 Data;
		Node<T1>* NextNodePoint;

	public:
		Node()
		{
			Data = NULL;
			NextNodePoint = nullptr;
		}
	};

	Node<T>* FrontNode;
	Node<T>* BackNode;

public:
	Queue()
	{
		FrontNode = nullptr;
		BackNode = nullptr;
	}

	~Queue()
	{
		Node<T>* Temp1 = FrontNode;
		Node<T>* Temp2 = Temp1->NextNodePoint;

		while (1)
		{
			if (Temp1 != nullptr)
			{
				Temp2 = Temp1->NextNodePoint;
				delete Temp1;
			}
			else
			{
				break;
			}

			if (Temp2 != nullptr)
			{
				Temp1 = Temp2->NextNodePoint;
				delete Temp2;
			}
			else
			{
				break;
			}
		}
	}

	void add(T data)
	{
		Node<T>* NewNode = new Node<T>();

		NewNode->Data = data;

		if (FrontNode == nullptr)
		{
			FrontNode = NewNode;
			BackNode = NewNode;
		}
		else if (FrontNode != nullptr)
		{
			BackNode->NextNodePoint = NewNode;
			BackNode = NewNode;
		}

	}

	T remove()
	{
		if (FrontNode != nullptr)
		{
			T data = FrontNode->Data;
			Node<T>* Temp = FrontNode->NextNodePoint;

			delete FrontNode;

			FrontNode = Temp;

			return data;
		}
		else
		{
			assert(FrontNode != nullptr);
		}
	}

	T peek()
	{
		if (FrontNode != nullptr)
		{
			return FrontNode->Data;
		}
		else
		{
			assert(FrontNode != nullptr);
		}
	}

	bool isEmpty()
	{
		return (FrontNode == nullptr);
	}
};

int main()
{
	Queue<int> queue;

	queue.add(11);
	queue.add(21);
	queue.add(31);
	cout << queue.peek() << endl; // 11

	cout << queue.remove() << endl; // 11
	cout << queue.peek() << endl; //21

	cout << queue.remove() << endl; // 21
	cout << queue.peek() << endl; // 31

	cout << queue.remove() << endl; // 31

	queue.add(111);
	cout << queue.peek() << endl; // 111

	return 0;
}