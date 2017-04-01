#pragma once
#include <cstring>
#include <iostream>
class String
{
private:
	void Resize();
	int count;
	int capacity;
	char* string;
	void copyFunc(const String& string);
public:
	String();
	String(char* string);
	~String();
	String(const String& string);
	String& operator=(const String& string);
	const char* GetString() const;
	int Length();
	void Append(const char* string);
	void Print();


};