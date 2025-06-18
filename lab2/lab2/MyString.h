class MyString
{
private:
	char* m_pStr;		// Ёлемент данных класса (адрес строки)
public:
	
	MyString() : m_pStr(nullptr) {};  //  онструктор по умолчанию
	MyString(const char* s);	// ќбъ€вление конструктора
	~MyString();		// ќбъ€вление деструктора

	void Copy(const char* s);
	const char* GetString() const;	
	int GetLength();	

	MyString(const MyString& other);
	MyString& operator=(const MyString& other);
};
