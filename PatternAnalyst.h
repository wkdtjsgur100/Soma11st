#pragma once

/*
	������� ������ �м��ϴ� Ŭ����. 
	�м� �˰����� �̰����� �����Ѵ�.
	Singleton Ŭ���� ������, ��Ƽ ������ ȯ�濡�� ���۽�ų �� �ֵ��� �����Ѵ�.
*/
class PatternAnalyst
{
	static PatternAnalyst* instance;
public:
	static PatternAnalyst* getInstance();
	void end();
};