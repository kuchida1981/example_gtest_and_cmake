#include "person.h"

Person::Person(char **name, int age)
	: m_name(name), m_age(age)
{
}

char **Person::_getName(void)
{
	return m_name;
}

int Person::_getAge(void)
{
	return m_age;
}

char **Person::getName(void)
{
	return _getName();
}

int Person::getAge(void)
{
	return _getAge();
}
