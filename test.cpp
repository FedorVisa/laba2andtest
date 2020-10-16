#include "pch.h"
#include "Source1.cpp"

TEST(TestcheckLetter, minusvvod) {
    for (int i = -128; i < 0; i++) {
        ASSERT_EQ(checkLetter(i), 0);
    }
}
TEST(TestcheckLetter, vvod_ot_0_d0_A) {
    for (int i = 0; i < 'A'; i++) {
        ASSERT_EQ(checkLetter(i), 0);
    }
    checkLetter(' ');
}
TEST(TestcheckLetter, vvod_ot_Z_do_a) {
    for (int i = 'Z' + 1; i < 'a'; i++) {
        ASSERT_EQ(checkLetter(i), 0);
    }
}
TEST(checkLetterTest, positivInput) {
    for (int i = 'z' + 1; i <= 127; i++) {
        ASSERT_EQ(checkLetter(i), 0);
    }
}
TEST(TestcheckLetter, vvod_ot_A_do_Z) {
    for (int i = 'A'; i <= 'Z'; i++) {
        ASSERT_EQ(checkLetter(i), 1);
    }
}
TEST(checkLetterTest, from_a_to_z_Input) {
    for (int i = 'a'; i <= 'z'; i++) {
        ASSERT_EQ(checkLetter(i), 1);
    }
}