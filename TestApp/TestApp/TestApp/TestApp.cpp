// TestApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TestClass1.h"


int main()
{
	auto myTest = TestClass1();

	double var = myTest.getValue();

    return 0;
}

