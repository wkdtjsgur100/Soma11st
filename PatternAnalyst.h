#pragma once

#include "UserPattern.h"
#include "DatabaseManager.h"

/*
	사용자의 패턴을 분석한 결과를 데이터 베이스에서 불러온다.
	Singleton 클래스 이지만, 멀티 스레드 환경에서 동작시킬 수 있도록 변형한다.
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