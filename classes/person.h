class Person
{
public:
	Person(char **name, int age);
	~Person();

	char **getName(void);
	int getAge(void);

private:
	char **m_name;
	int m_age;
	char **_getName(void);
	int _getAge(void);
};
