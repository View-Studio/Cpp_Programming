#pragma once
#include <iostream>

class Marine
{
	int hp;                // ���� ü��
	int coordX, coordY;  // ���� ��ġ
	int damage;            // ���ݷ�
	bool isDead;
	char* name;  // ���� �̸�

public:
	Marine();              // �⺻ ������
	Marine(int x, int y);  // x, y ��ǥ�� ���� ����
	Marine(int x, int y, const char* marine_name);  // �̸����� ����
	~Marine();   // �Ҹ��ڴ� �Ű������� �ƹ� �͵� ������ �ʴ´�.  =>  �����ε��� ���� �ʴ´�.

	int attack();                       // �������� �����Ѵ�.
	void beAttacked(int damageEarn);  // �Դ� ������
	void move(int x, int y);            // ���ο� ��ġ

	void showStatus();  // ���¸� �����ش�.
};

