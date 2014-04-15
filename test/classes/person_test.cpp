#include "gtest/gtest.h"
#include "classes/person.h"

namespace
{

class PersonTest : public ::testing::Test {

protected:

PersonTest()
{
	person = new Person((char**)"kosuke", 30);
}

virtual ~PersonTest()
{
}

virtual void SetUp()
{
}

virtual void TearDown()
{
}

Person *person;

};

// TEST_F(PersonTest, test_getName)
// {
// 	ASSERT_STREQ(person->getName(), "kosuke");
// }

TEST_F(PersonTest, test_getAge)
{
	ASSERT_EQ(person->getAge(), 30);
}

} // namespace
