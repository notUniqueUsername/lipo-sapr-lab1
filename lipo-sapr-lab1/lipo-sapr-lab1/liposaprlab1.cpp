// liposaprlab1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "cstdlib"
#include "GreetinEntity.h"
#include "string";


using namespace std;

int main()
{
	GreetinEntity greetinEntity((string)" frightening world of c++");
	cout << greetinEntity.message() << endl;
	system("pause");
    return 0;
}

