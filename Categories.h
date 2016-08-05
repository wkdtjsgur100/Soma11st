#pragma once

#include<string>
#include"Viewer.h"

/*
	기본적으로 카테고리는 아래와 같이 설계 되어있다고 가정합니다.
	만약 아래처럼 설계가 되어있지 않다면, 상황에 따라 바뀌어야 합니다.

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