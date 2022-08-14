#include <iostream>
#include <vector>
#include <cassert>
#include <Windows.h>

//using namespace std;


// erase 못 만듬
template<typename T>
class Vector
{
public:
	template<typename T1>
	class iterator
	{
	public:
		T1* _data;

	public:
		T1* operator= (T1 data)
		{
			*_data = data;
			return _data;
		}
		T1* operator= (T1* data)
		{
			_data = data;
			return _data;
		}
		iterator& operator= (Vector<T>::iterator<T>& itr)
		{
			*(_data) = *(itr);
			return *(this);
		}

		T1 operator* ()
		{
			if (_data)
			{
				return *(_data);
			}
		}

		bool operator!= (Vector<T>::iterator<T>& itr)
		{
			return _data != itr._data;
		}

		T1* operator++ ()
		{
			_data = (_data + 1);
			return _data;
		}

		T1* operator-- ()
		{
			_data = (_data - 1);
			return _data;
		}

		iterator& operator+ (int move)
		{
			_data = (_data + move);
			return *(this);
		}
	};

public:
	T& operator[] (int pos)
	{
		if (pos < _size)
		{
			return *(_datas + pos);
		}
		else
		{
			assert(pos < _size);
		}
	}

private:
	int _size;
	int _capacity;
	T* _datas;
	iterator<T> _itr;

public:
	Vector()
	{
		_size = 0;
		_capacity = 0;
		_datas = nullptr;
		_itr = nullptr;
	}
	Vector(int size)
	{
		if (size >= 0)
		{
			_size = size;
			_capacity = size;
			_datas = new T[_capacity];
			_itr = _datas;
		}
	}
	~Vector()
	{
		delete[] _datas;
	}

	void push_back(T data)
	{
		if (_size == _capacity)
		{
			if (_capacity == 0)
			{
				++_capacity;
			}
			else if (_capacity == 1)
			{
				++_capacity;
			}
			else
			{
				_capacity += (int)(_size / 2);
			}
			T* temp = new T[_capacity];

			for (int i = 0; i < _size; ++i)
			{
				temp[i] = _datas[i];
			}
			temp[_size] = data;

			delete[] _datas;

			_datas = temp;
			++_size;
		}
		else
		{
			_datas[_size] = data;
			++_size;
		}
	}

	T pop_back()
	{
		if (_datas != nullptr && _size > 0)
		{
			T temp = _datas[_size];
			_datas[_size] = NULL;
			--_size;
			return temp;
		}
		else
		{
			assert(_datas != nullptr && _size > 0);
		}
	}

	void resize(int newSize)
	{
		if (newSize > _capacity)
		{
			_capacity = newSize;
		}
		_size = newSize;
	}

	void reserve(int newCapacity)
	{
		if (_size > newCapacity)
		{
			HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
			::SetConsoleTextAttribute(output, static_cast<int>(FOREGROUND_RED | FOREGROUND_GREEN));
			std::cout << "[Warning] : 데이터가 손실됐습니다!" << std::endl;
			::SetConsoleTextAttribute(output, static_cast<int>(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE));
			_size = newCapacity;
		}
		_capacity = newCapacity;
	}

	Vector<T>::iterator<T>& begin()
	{
		_itr = _datas;
		return _itr;
	}

	Vector<T>::iterator<T>& end()
	{
		_itr = (_datas + _size);
		return _itr;
	}

	Vector<T>::iterator<T>& insert(Vector::iterator<T>& it, T value)
	{
		*(it._data) = value;
		return it;
	}

	void erase(Vector::iterator<T>& it1, Vector::iterator<T>& it2)
	{

	}

	void clear()
	{
		_size = 0;
	}

	int size()
	{
		return _size;
	}

	int capacity()
	{
		return _capacity;
	}

	bool empty()
	{
		return _size == 0 || _datas == nullptr;
	}

	T front()
	{
		return _datas[0];
	}

	T back()
	{
		return _datas[_size - 1];
	}
};

template<typename T>
class List
{

};

int main()
{


	return 0;
}