#pragma once

/*
	������� ������ ĸ��ȭ.
	abstract class.
*/
#include<vector>
#include "Categories.h"
#include "Product.h"

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
	std::vector<Category*> interestedCategory; //����ڰ� ������ ������ ī�װ�
	std::vector<ProductInfo> interestedProductInfo;
protected:
	//���� ���� ��ȣȭ
	virtual std::string encryptionUserPattern();
public:
	//������ ������ �����ͺ��̽��� ������ �� �ֵ��� ������ convert ��Ų��.
	virtual UserPatternDataBaseInfo convertUserPatternToDatabaseInfo();
};

class PatternCase1 : public UserPattern
{
public:
	std::string encryptionUserPattern() override; // ���� ���̽��� ���� override �� �� �ִ�.
};

class PatternCase2 : public UserPattern
{
public:
};