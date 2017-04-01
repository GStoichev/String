
#include "stdafx.h"
#include "String.h"


void String::Resize()
{
	this->capacity *= 2;
		char* temp = new char[this->capacity];
		strncpy(temp, this->string,this->count);
		delete[] this->string;
		this->string = temp;
}
const char* String::GetString() const
{
	return this->string;
}
String::String()
{
	this->count = 0;
	this->capacity = 8;
	this->string = new char[capacity];
	strcpy(this->string, "");
}
String::String(char* string)
{
	this->count = 0;
	this->capacity = 4;
	int len = strlen(string) + 1;
	this->count = len;
	this->capacity = 2* len ;
	this->string = new char[this->capacity];
	strncpy(this->string, string, count);
}
void String::copyFunc(const String& string)
{
	this->count = string.count;
	this->capacity = string.capacity;
	this->string = new char[capacity];
	strcpy(this->string, string.GetString());
}
String::~String()
{
	delete[] this->string;
}
String::String(const String& string)
{
	this->copyFunc(string);
}
String& String::operator=(const String& string)
{
	if (this != &string)
	{
		delete[] this->string;
		this->copyFunc(string);
	}
	return *this;
}
void String::Append(const char* string)
{
	int len = strlen(string) + 1;
	while (count+len>capacity)
	{
		Resize();
	}
	for (size_t i = 0; i < len; i++)
	{
		this->string[this->count++] = string[i];
	}

}
int String::Length()
{
	return this->count - 1;
}
void String::Print()
{
	std::cout << this->string << "\n";
}