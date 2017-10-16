#include "TestClass1.h"

TestClass1::TestClass1()
{
	m_var = 2;
}

TestClass1::~TestClass1()
{

}

double TestClass1::getValue()
{
	return m_var;
}

double TestClass1::add(double a, double b)
{
	return a + b;
}