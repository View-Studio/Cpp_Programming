#include <iostream>

using namespace std;

template<typename T1>
class Node
{
public:
	Node()
	{
		Data = NULL;
		LChildNode = nullptr;
		RChildNode = nullptr;
	}

	Node(T1 data)
	{
		Data = data;
		LChildNode = nullptr;
		RChildNode = nullptr;
	}

	T1 Data;
	Node<T1>* LChildNode;
	Node<T1>* RChildNode;
};

template<typename T>
class BinTree
{
private:
	Node<T>* RootNode;

public:
	void setRoot(Node<T>* node)
	{
		RootNode = node;
	}

	Node<T>* getRoot()
	{
		return RootNode;
	}

	Node<T>* makeNode(T data, Node<T>* left, Node<T>* right)
	{
		Node<T>* newNode = new Node<T>(data);

		newNode->LChildNode = left;
		newNode->RChildNode = right;

		return newNode;
	}

	void Inorder(Node<T>* node)
	{
		if (node != nullptr)
		{
			Inorder(node->LChildNode);
			cout << node->Data << endl;
			Inorder(node->RChildNode);
		}
	}

	void Preorder(Node<T>* node)
	{
		if (node != nullptr)
		{
			cout << node->Data << endl;
			Preorder(node->LChildNode);
			Preorder(node->RChildNode);
		}
	}

	void Postorder(Node<T>* node)
	{
		if (node != nullptr)
		{
			Postorder(node->LChildNode);
			Postorder(node->RChildNode);
			cout << node->Data << endl;
		}
	}
};

int main()
{
	//            999
	//           /   \
	//         240   42
	//         / \   / \ 
	//       12  52 31 25 


	BinTree<int> BT;

	Node<int>* left = BT.makeNode(12, nullptr, nullptr); // Leaf
	Node<int>* right = BT.makeNode(52, nullptr, nullptr); // Leaf
	Node<int>* root = BT.makeNode(240, left, right);

	Node<int>* left1 = BT.makeNode(31, nullptr, nullptr); // Leaf
	Node<int>* right1 = BT.makeNode(25, nullptr, nullptr); // Leaf
	Node<int>* root1 = BT.makeNode(42, left1, right1);

	Node<int>* realRoot = BT.makeNode(999, root, root1);
	BT.setRoot(realRoot);


	cout << "Inorder" << endl;
	BT.Inorder(BT.getRoot()); // 12, 240, 52, 999, 31, 42, 25
	cout << endl << endl;

	cout << "Preorder" << endl;
	BT.Preorder(BT.getRoot()); // 999, 240, 12, 52, 42, 31, 25
	cout << endl << endl;

	cout << "Postorder" << endl;
	BT.Postorder(BT.getRoot()); // 12, 52, 240, 31, 25, 42, 999
	cout << endl << endl;

	return 0;
}