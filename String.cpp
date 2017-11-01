#include "String.h"

String::String()
{
	m_str_p = new char[INITIAL_SIZE];
	Clear();
}


String::~String()
{
	delete[] m_str_p;
	m_str_p = NULL;
}

char* String::GetPtr() const
{
	return m_str_p;
}

size_t String::GetLength() const
{
	return m_length;
}

void String::Assign(const char *otherString)
{
	m_length = strlen(otherString);
	resize(m_length);
	strncpy(m_str_p, otherString, m_length);
	m_str_p[m_length] = '\0';
}

char String::CharAt(size_t index)
{
	return m_str_p[index];
}

void String::Append(const String &otherString)
{
	m_length += otherString.GetLength();
	resize(m_length);
	strcat(m_str_p, otherString.GetPtr());
}

int String::Compare(const String &otherString)
{
	return strcmp(m_str_p, otherString.GetPtr());
}

bool String::IsEmpty()
{
	return m_length == 0;
}

void String::Clear()
{
	m_buf_size = INITIAL_SIZE;
	*m_str_p = NULL;	
	m_length = 0;
}

void String::resize(const int length)
{
	if (length + 1 > m_buf_size)
	{
		m_buf_size = length + 1;
		delete[] m_str_p;
		m_str_p = new char[m_buf_size];
	}
}
