#pragma once

/*
	사용자의 패턴을 분석하는 클래스. 
	분석 알고리즘은 이곳에서 구현한다.
	Singleton 클래스 이지만, 멀티 스레드 환경에서 동작시킬 수 있도록 변형한다.
*/
class PatternAnalyst
{
	static PatternAnalyst* instance;
public:
	static PatternAnalyst* getInstance();
	void end();
};