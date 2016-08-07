#include "PatternAnalyst.h"

PatternAnalyst* PatternAnalyst::instance = nullptr;

PatternAnalyst * PatternAnalyst::getInstance()
{
	if (instance == nullptr)
	{
		instance = new PatternAnalyst();
	}
	return instance;
}

void PatternAnalyst::end()
{
	if(instance != nullptr)
		delete instance;
}
