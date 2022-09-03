#pragma once
class IBevrage
{
public:
	virtual int get_cost() = 0;
};

class Espresso:public IBevrage
{
//this is a base class to start decorator
public:
	int get_cost() {
		return 1;
	}

private:

};


