#pragma once

/*
	사용자의 패턴을 캡슐화.
	abstract class.
*/
#include<vector>
#include "Categories.h"
#include "Product.h"

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
	std::vector<Category*> interestedCategory; //사용자가 관심을 가지는 카테고리
	std::vector<ProductInfo> interestedProductInfo;
protected:
	//유저 패턴 암호화
	virtual std::string encryptionUserPattern();
public:
	//유저의 패턴을 데이터베이스에 저장할 수 있도록 정보를 convert 시킨다.
	virtual UserPatternDataBaseInfo convertUserPatternToDatabaseInfo();
};

class PatternCase1 : public UserPattern
{
public:
	std::string encryptionUserPattern() override; // 패턴 케이스에 따라서 override 될 수 있다.
};

class PatternCase2 : public UserPattern
{
public:
};