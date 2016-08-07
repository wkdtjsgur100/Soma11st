#include "UserPattern.h"

std::string UserPattern::encryptionUserPattern()
{
	return std::string();
}

UserPatternDataBaseInfo UserPattern::convertUserPatternToDatabaseInfo()
{
	//가지고 있는 정보들을 DataBaseInfo의 형식에 맞춰 변환 후 반환.
	return UserPatternDataBaseInfo();
}

std::string PatternCase1::encryptionUserPattern()
{
	UserPattern::encryptionUserPattern();
	return std::string();
}
