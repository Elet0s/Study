#pragma once
#include"ConsoleMath.h"

class Monster
{
public:// ��𼭵� ���� ����
	// constrcuter destructer
	Monster();//������
	~Monster();//�Ҹ���

	// delete Function
	Monster(const Monster& _Other) = delete;//���� ������
	Monster(Monster&& _Other) noexcept = delete;//���۷��� ������
	Monster& operator=(const Monster& _Other) = delete;//���Կ�����(����)
	Monster& operator=(Monster&& _Other) noexcept = delete;//Rvalue ���۷��� ������
protected:// ��Ӱ����� ��� ���� ����

private://�ش� Ŭ���������� ���� ����
	ConsoleVector Pos;
};