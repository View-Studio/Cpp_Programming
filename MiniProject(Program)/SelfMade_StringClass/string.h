#pragma once
#include <iostream>

class string
{
	char* str;
	int len;

public:
	string(char c, int n);  // ���� c �� n �� �ִ� ���ڿ��� ����
	string(const char* s);
	string(const string& s);
	~string();

	void add_string(const string& s);   // str �ڿ� s �� ���δ�.
	void copy_string(const string& s);  // str �� s �� �����Ѵ�.
	int strlen();                       // ���ڿ� ���� ����
};

