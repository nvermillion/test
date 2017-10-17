// TestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TestClass1.h"
#include <iostream>


int main()
{
	auto myTest = TestClass1();

	double var = myTest.getValue();

	auto result = myTest.add(var, 2.0);

	std::cout << result;

	//comment

	//comment2

    return 0;
}

