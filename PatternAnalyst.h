#pragma once

#include "UserPattern.h"
#include "DatabaseManager.h"

/*
	������� ������ �м��� ����� ������ ���̽����� �ҷ��´�.
	Singleton Ŭ���� ������, ��Ƽ ������ ȯ�濡�� ���۽�ų �� �ֵ��� �����Ѵ�.
*/
class PatternAnalyst
{
	static PatternAnalyst* instance;
	DatabaseManager* dbManager;

	PatternAnalyst() {}
	~PatternAnalyst() {}
protected:
	void lock(); // for multithreading
public:
	static PatternAnalyst* getInstance();
	void init();

	void end();
};