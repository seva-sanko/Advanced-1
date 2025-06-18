class MyString
{
private:
	char* m_pStr;		// ������� ������ ������ (����� ������)
public:
	
	MyString() : m_pStr(nullptr) {};  // ����������� �� ���������
	MyString(const char* s);	// ���������� ������������
	~MyString();		// ���������� �����������

	void Copy(const char* s);
	const char* GetString() const;	
	int GetLength();	

	MyString(const MyString& other);
	MyString& operator=(const MyString& other);
};
