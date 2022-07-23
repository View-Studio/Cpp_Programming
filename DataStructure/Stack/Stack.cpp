#include <iostream>
#include<cassert>

using namespace std;

template <typename T>
class Stack
{
private:
	template <typename T1>
	class Node
	{
	public:
		T1 Data;
		Node* PrevNodePoint;
	};

	Node<T> prevNode;
	Node<T>* newNode;

public:
	Stack()
	{
		newNode = nullptr;
		prevNode.Data = NULL;
		prevNode.PrevNodePoint = nullptr;
	}
	~Stack()
	{
		if (newNode != nullptr)
		{
			if (newNode->PrevNodePoint != nullptr)
			{
				Node<T>* temp1 = newNode->PrevNodePoint;
				Node<T>* temp2 = temp1->PrevNodePoint;

				while (1)
				{
					if (temp1 != nullptr)
					{
						temp2 = temp1->PrevNodePoint;
						delete temp1;
					}
					else
					{
						break;
					}

					if (temp2 != nullptr)
					{
						temp1 = temp2->PrevNodePoint;
						delete temp2;
					}
					else
					{
						break;
					}
				}
			}
			delete newNode;
		}
	}
	T pop()
	{
		if (newNode != nullptr)
		{
			Node<T>* backNode = newNode->PrevNodePoint;
			T nowData = newNode->Data;

			delete newNode;

			newNode = backNode;
			prevNode = *backNode;

			return nowData;
		}
		else
		{
			assert(newNode != nullptr);
		}
	}

	void push(T data)
	{
		newNode = new Node<T>();
		newNode->Data = data;
		if (prevNode.PrevNodePoint != nullptr)
		{
			newNode->PrevNodePoint = prevNode.PrevNodePoint;
		}
		else
		{
			newNode->PrevNodePoint = nullptr;
		}
		prevNode.Data = data;
		prevNode.PrevNodePoint = newNode;
	}

	T peek()
	{
		if (newNode != nullptr)
		{
			return newNode->Data;
		}
		else
		{
			assert(newNode != nullptr);
		}
	}

	bool isEmpty()
	{
		if (newNode == nullptr)
		{
			return true;
		}
		else if (newNode != nullptr)
		{
			return false;
		}
	}
};

int main()
{
	Stack<int> stack;

	cout << "Stack is Empty : " << stack.isEmpty() << endl;  // Stack is Empty : 1

	stack.push(1553);
	cout << "Stack is Empty : " << stack.isEmpty() << endl;  // Stack is Empty : 0

	stack.push(23452);
	stack.push(11);
	stack.push(13);
	stack.push(33344);

	cout << "Stack Peek : " << stack.peek() << endl;  // Stack Peek : 33344
	cout << "Stack Pop : " << stack.pop() << endl;  // Stack Pop : 33344
	cout << "Stack Peek : " << stack.peek() << endl << endl;  // Stack Peek : 13

	return 0;
}