/*
These test cases can be used to test-drive a solution to the diamond kata, in an interative manner.
Enable only one test case for "Diamond A", one for "Diamond B" and one for "Diamond C" at any one time.
The idea is that you iterate towards a full solution.

to run the tests, use 'make && ./test_diamond_incremental'

Instructions:
1. Make the first test for Diamond A (which is failing) pass
2. Uncomment the next test in main function. Comment or delete any previous test case related to that specific diamond. Make it pass.
3. keep doing this until you have exactly one test case for each diamond, (A, B, and C), and you've got to the end of the file.
At that point you should have a working implementation.
*/

#include "unity_src/unity.h"
#include "diamond.h"

void test_DiamondA_has_one_line_containing_A() {
	char buffer[1024];
	diamond_print('A', buffer);
	TEST_ASSERT_EQUAL_STRING("A", buffer);
}

void test_DiamondB_prints_a_char_sequence_for_the_top_half() {
	char buffer[1024];
	diamond_print('B', buffer);
	TEST_ASSERT_EQUAL_STRING("AB", buffer);
}

void test_DiamondB_prints_a_char_sequence_for_the_top_and_bottom__halves() {
	char buffer[1024];
	diamond_print('B', buffer);
	TEST_ASSERT_EQUAL_STRING("ABA", buffer);
}

void test_DiamondC_prints_a_char_sequence_for_the_top_and_bottom__halves() {
	char buffer[1024];
	diamond_print('C', buffer);
	TEST_ASSERT_EQUAL_STRING("ABCBA", buffer);
}

void test_DiamondB_separates_rows() {
	char buffer[1024];
	diamond_print('B', buffer);
	TEST_ASSERT_EQUAL_STRING("A\nB\nA", buffer);
}

void test_DiamondB_indents_first_and_last_rows() {
	char buffer[1024];
	diamond_print('B', buffer);
	TEST_ASSERT_EQUAL_STRING(" A\nB\n A", buffer);
}

void test_DiamondC_indents_all_rows_except_middle() {
	char buffer[1024];
	diamond_print('C', buffer);
	TEST_ASSERT_EQUAL_STRING("  A\n"
	                         " B\n"
	                         "C\n"
	                         " B\n"
	                         "  A", buffer);
}

void test_DiamondB_duplicates_the_middle_B() {
	char buffer[1024];
	diamond_print('B', buffer);
	TEST_ASSERT_EQUAL_STRING(" A\nBB\n A", buffer);
}

void test_DiamondC_duplicates_letters_on_middle_rows() {
	char buffer[1024];
	diamond_print('C', buffer);
	TEST_ASSERT_EQUAL_STRING("  A\n"
	                         " BB\n"
	                         "CC\n"
	                         " BB\n"
	                         "  A", buffer);
}

void test_DiamondB_has_a_space_between_the_two_Bs() {
	char buffer[1024];
	diamond_print('B', buffer);
	TEST_ASSERT_EQUAL_STRING(" A\nB B\n A", buffer);
}

void test_DiamondC_has_spaces_on_middle_rows() {
	char buffer[1024];
	diamond_print('C', buffer);
	TEST_ASSERT_EQUAL_STRING("  A\n"
	                         " B B\n"
	                         "C   C\n"
	                         " B B\n"
	                         "  A", buffer);
}

void test_DiamondD_is_correct() {
	char buffer[1024];
	diamond_print('D', buffer);
	TEST_ASSERT_EQUAL_STRING("   A\n"
	                         "  B B\n"
	                         " C   C\n"
	                         "D     D\n"
	                         " C   C\n"
	                         "  B B\n"
	                         "   A", buffer);
}

int main() {
	UnityBegin(__FILE__);
	RUN_TEST(test_DiamondA_has_one_line_containing_A);
	//RUN_TEST(test_DiamondB_prints_a_char_sequence_for_the_top_half);
	//RUN_TEST(test_DiamondB_prints_a_char_sequence_for_the_top_and_bottom__halves);
	//RUN_TEST(test_DiamondC_prints_a_char_sequence_for_the_top_and_bottom__halves);
	//RUN_TEST(test_DiamondB_separates_rows);
	//RUN_TEST(test_DiamondB_indents_first_and_last_rows);
	//RUN_TEST(test_DiamondC_indents_all_rows_except_middle);
	//RUN_TEST(test_DiamondB_duplicates_the_middle_B);
	//RUN_TEST(test_DiamondC_duplicates_letters_on_middle_rows);
	//RUN_TEST(test_DiamondB_has_a_space_between_the_two_Bs);
	//RUN_TEST(test_DiamondC_has_spaces_on_middle_rows);
	//RUN_TEST(test_DiamondD_is_correct);
	return UnityEnd();
}
