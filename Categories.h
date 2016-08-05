#pragma once

#include<string>
#include"Viewer.h"

/*
	�⺻������ ī�װ��� �Ʒ��� ���� ���� �Ǿ��ִٰ� �����մϴ�.
	���� �Ʒ�ó�� ���谡 �Ǿ����� �ʴٸ�, ��Ȳ�� ���� �ٲ��� �մϴ�.

*/

class CategoryViewer
{
	TopDownMenuViewer* viewer;
public:

};

class Category
{
private:
	std::string name;
	std::string idx;
	std::string group_idx; 
public:

};

class CElectricItem : public Category
{
public:
};

class CComputer : public CElectricItem
{

};

class CDigitalCam : public CElectricItem
{

};

class CFurniture : public Category
{

};

class CFood : public Category
{

};

class CEtc : public Category
{

};