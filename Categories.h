#pragma once

#include"Viewer.h"


class Category
{
private:
	std::string name;
	std::string idx;
	std::string group_idx;
	std::vector<unsigned long> product_numbers; 
public:
};

class CElectricItem : public Category
{
public:
};

class CComputer : public CElectricItem
{
public:
};

class CDigitalCam : public CElectricItem
{
public:
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


class CategoryViewer : public TopDownMenuViewer
{
	Category* category;
public:
};