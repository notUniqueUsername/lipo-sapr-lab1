#pragma once
#include "iostream"

using namespace std;

class GreetinEntity
{
public:
	GreetinEntity();
	GreetinEntity(const string& whom);
	~GreetinEntity();
	string message() const;
	string who;
private:
	
};

