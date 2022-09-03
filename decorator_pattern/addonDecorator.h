#pragma once
#include "IBevrage.h"

class addonDecorator:public IBevrage
{
	//this is addons to beverage this is abstract class
public:
	
	virtual int get_cost() = 0;
};

class caramel:public addonDecorator
{
	//add more caramel like classes as addons
	IBevrage &bev;
public:
	caramel(IBevrage &beverage):bev(beverage){	}

	int get_cost() {
		return bev.get_cost() + 2;
	}

private:

};

class milk :public addonDecorator
{
	//add more caramel like classes as addons
	IBevrage& bev;
public:
	milk(IBevrage& beverage) :bev(beverage) {	}

	int get_cost() {
		return bev.get_cost() + 4;
	}

private:

};
