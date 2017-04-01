// ConsoleApplication1.cpp : main project file.

#include "stdafx.h"
#include "String.h"

int main()
{
	String printMe("Hello");
	std::cout << printMe.Length() << "\n";
	printMe.Print();
    return 0;
}
