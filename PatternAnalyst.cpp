#include "PatternAnalyst.h"

PatternAnalyst* PatternAnalyst::instance = nullptr;

void PatternAnalyst::lock()
{
}

PatternAnalyst * PatternAnalyst::getInstance()
{
	if (instance == nullptr)
	{
		instance = new PatternAnalyst();
	}
	return instance;
}

void PatternAnalyst::init()
{
}

void PatternAnalyst::end()
{
	if(instance != nullptr)
		delete instance;
}
