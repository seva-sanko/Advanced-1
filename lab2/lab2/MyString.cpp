#include "stdafx.h"
#include "MyString.h"

void MyString::Copy(const char* s)
{
	delete[] m_pStr;
	// Динамически выделяем требуемое количество памяти.
	int len = strlen(s) + 1;
	m_pStr = new char[len];
	// + 1, так как нулевой байт тоже нужно скопировать
	// Если память выделена, копируем строку-аргумент в строку-член класса
	if (m_pStr)
		strcpy_s(m_pStr, len, s);
}

// Определение конструктора.
MyString::MyString(const char* s)
{
	//delete[] m_pStr;
	//// Динамически выделяем требуемое количество памяти.
	//m_pStr = new char[1];
	//if (m_pStr == nullptr)
	//	strcpy_s(m_pStr, 1, s);

	Copy(s);
}

// Определение деструктора.
MyString::~MyString()
{
	// Освобождение памяти, занятой в конструкторе для строки-члена класса
	delete[] m_pStr;
}

// Метод класса
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

// Конструктор копирования
MyString::MyString(const MyString& other) {
	Copy(other.m_pStr);
}

// Оператор присваивания
MyString& MyString:: operator=(const MyString& other) {
	if (this == &other)
		return *this;

	Copy(other.m_pStr);
	return *this;
}
