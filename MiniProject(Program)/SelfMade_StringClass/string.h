#pragma once
#include <iostream>

class string
{
	char* str;
	int len;

public:
	string(char c, int n);  // ���� c �� n �� �ִ� ���ڿ��� ���� // C
	string(const char* s); // C
	string(const string& s);
	~string();

	void add_string(const string& s);   // str �ڿ� s �� ���δ�.
	void copy_string(const string& s);  // str �� s �� �����Ѵ�.
	int strlen() const;                       // ���ڿ� ���� ����
	void printString();
};

