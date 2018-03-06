#include <test.h>

TEST(beforeRefactoringTests, test) { EXPECT_EQ(1, 1) << "GTest working test"; }

TEST_F(OriginalTestFixture, initialTest) {
  EXPECT_EQ(GetPoint().x, 10);
  EXPECT_EQ(GetPoint().y, 20);
}
