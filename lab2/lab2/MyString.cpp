#include "stdafx.h"
#include "MyString.h"

void MyString::Copy(const char* s)
{
	delete[] m_pStr;
	// ����������� �������� ��������� ���������� ������.
	int len = strlen(s) + 1;
	m_pStr = new char[len];
	// + 1, ��� ��� ������� ���� ���� ����� �����������
	// ���� ������ ��������, �������� ������-�������� � ������-���� ������
	if (m_pStr)
		strcpy_s(m_pStr, len, s);
}

// ����������� ������������.
MyString::MyString(const char* s)
{
	//delete[] m_pStr;
	//// ����������� �������� ��������� ���������� ������.
	//m_pStr = new char[1];
	//if (m_pStr == nullptr)
	//	strcpy_s(m_pStr, 1, s);

	Copy(s);
}

// ����������� �����������.
MyString::~MyString()
{
	// ������������ ������, ������� � ������������ ��� ������-����� ������
	delete[] m_pStr;
}

// ����� ������
const char* MyString::GetString() const
{
	if (m_pStr == nullptr)
		return "Empty string";
	return m_pStr;
}

int MyString::GetLength()
{
	return strlen(m_pStr) + 1;
}

// ����������� �����������
MyString::MyString(const MyString& other) {
	Copy(other.m_pStr);
}

// �������� ������������
MyString& MyString:: operator=(const MyString& other) {
	if (this == &other)
		return *this;

	Copy(other.m_pStr);
	return *this;
}
