#pragma once

/*
	������� ������ ĸ��ȭ.
	abstract class.
*/
#include<vector>
#include"Categories.h"

/*
	UserPatternData
	������ ���̽��� ����� ������ ��������.
*/
class UserPatternDataBaseInfo
{
public:
	std::string data;
	std::string packet_data; //�߰������� �ٴ� ��Ŷ ������ 
};

/*
	UserPattern
	������ ���� �������� ĸ��ȭ �س���
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