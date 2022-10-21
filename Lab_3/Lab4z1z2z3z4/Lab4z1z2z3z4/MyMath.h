#pragma once
#include <iostream>
using namespace std;

class MyMath
{
public:
	static int callsCount;
	static int add(int, int);
	static int sab(int, int);
	static int mult(int, int);
	static float div(int, int);
};

