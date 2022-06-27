#pragma once
#include <iostream>

class Marine
{
	int hp;                // 마린 체력
	int coordX, coordY;  // 마린 위치
	int damage;            // 공격력
	bool isDead;
	char* name;  // 마린 이름

public:
	Marine();              // 기본 생성자
	Marine(int x, int y);  // x, y 좌표에 마린 생성
	Marine(int x, int y, const char* marine_name);  // 이름까지 지정
	~Marine();   // 소멸자는 매개변수를 아무 것도 가지지 않는다.  =>  오버로딩도 되지 않는다.

	int attack();                       // 데미지를 리턴한다.
	void beAttacked(int damageEarn);  // 입는 데미지
	void move(int x, int y);            // 새로운 위치

	void showStatus();  // 상태를 보여준다.
};

