#pragma once

#include<string>

class ProductInfo
{
public:
	std::string name;
	unsigned long number; //상품번호
	unsigned long price; //금액
	float discount_rate; //할인률(0.00 ~ 1.00f)
};

class Product
{
	ProductInfo info;
public:
	Product(const ProductInfo& info);

	virtual void init();

	std::string getName() const
	{ 
		return info.name;  
	}
	unsigned long getPrice() const
	{ 
		return info.price * info.discount_rate;  
	}
	unsigned long getNumber() const
	{ 
		return info.number;  
	}

	//기타 product의 기능들은 구축되있다 가정하고 생략.
};

class Camera : public Product
{
public:
	void init() override;
};

class Computer : public Product
{
public:
	void init() override;
};