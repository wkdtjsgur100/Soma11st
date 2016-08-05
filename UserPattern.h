#pragma once

/*
	사용자의 패턴을 캡슐화.
	abstract class.
*/
#include<vector>
#include"Categories.h"

/*
	UserPatternData
	데이터 베이스에 저장될 유저의 패턴정보.
*/
class UserPatternDataBaseInfo
{
public:
	std::string data;
	std::string packet_data; //추가적으로 붙는 패킷 데이터 
};

/*
	UserPattern
	유저의 패턴 정보들을 캡슐화 해놓음
*/
class UserPattern
{
	std::vector<Category*> interestedCategory;
public:
	virtual UserPatternDataBaseInfo convertUserPatternToDatabaseInfo();
};

class PatternCase1 : public UserPattern
{
public:
};

class PatternCase2 : public UserPattern
{
public:
};