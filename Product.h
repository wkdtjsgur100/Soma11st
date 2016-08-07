#pragma once

#include<string>

class ProductInfo
{
public:
	std::string name;
	unsigned long number; //��ǰ��ȣ
	unsigned long price; //�ݾ�
	float discount_rate; //���η�(0.00 ~ 1.00f)
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

	//��Ÿ product�� ��ɵ��� ������ִ� �����ϰ� ����.
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