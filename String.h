#pragma once
#include <iostream>
#include <string.h>

static const size_t INITIAL_SIZE = 20;

class String
{
private:
	char *m_str_p;		// pointer to the beginning of the string
	size_t m_length;	// length of string
	size_t m_buf_size;	// buffer size

	void resize(const int length);

public:
	String();
	~String();

	char* GetPtr() const;		// returns the pointer m_str_p
	size_t GetLength() const;	// returns the length
	void Assign(const char* otherString);	// this = otherString
	char CharAt(size_t index);				// returns m_str_p[index]
	void Append(const String &otherString);	// this = this + otherString
	int Compare(const String &otherString);	// returns strcmp(this, otherString)
	bool IsEmpty();
	void Clear();
};
