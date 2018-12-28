#include "stdafx.h"
#include "GreetinEntity.h"


GreetinEntity::GreetinEntity(const string& whom)
{
	who = whom;
}

GreetinEntity::~GreetinEntity()
{
}

string GreetinEntity::message() const
{
	return (string)"Hello" + who;
}