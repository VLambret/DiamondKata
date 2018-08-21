/*
These test cases can be used to test-drive a solution to the diamond kata, in an incremental manner.

to run the tests, use 'make && ./test_diamond_incremental'

Instructions:
1. Make the first test case for Diamond A pass
2. Uncomment the next test in main function. Make it pass.
3. Uncomment the next test case. Make it pass
4. When all the lines of code in the test case are passing, continue to the next test case.
5. When all the test cases in this file are uncommented and passing, you should have a full working solution.
*/

#include "unity_src/unity.h"
#include "diamond.h"

void test_diamondA_has_one_line_containing_a() {
	char buffer[1024];
	diamond_print('A', buffer);
	TEST_ASSERT_EQUAL_STRING("A", buffer);
}

void test_letter_sequence_is_list_of_letters_on_each_line_of_the_diamond() {
	char buffer[1024];
	diamond_letter_sequence('A', buffer);
	TEST_ASSERT_EQUAL_STRING("A", buffer);

	//diamond_letter_sequence('B', buffer);
	//TEST_ASSERT_EQUAL_STRING("ABA", buffer);

	//diamond_letter_sequence('C', buffer);
	//TEST_ASSERT_EQUAL_STRING("ABCBA", buffer);

	//diamond_letter_sequence('D', buffer);
	//TEST_ASSERT_EQUAL_STRING("ABCDCBA", buffer);
}

void test_indents_is_list_of_indentation_for_each_line_of_the_diamond() {
	unsigned int buffer[1024];

	diamond_indents('A', buffer);
	const unsigned int expected_indent_a[] = {0};
	TEST_ASSERT_EQUAL_INT_ARRAY(expected_indent_a, buffer, 1);

	//diamond_indents('B', buffer);
	//const unsigned int expected_indent_b[] = {1, 0, 1};
	//TEST_ASSERT_EQUAL_INT_ARRAY(expected_indent_b, buffer, 3);

	//diamond_indents('C', buffer);
	//const unsigned int expected_indent_c[] = {2, 1, 0, 1, 2};
	//TEST_ASSERT_EQUAL_INT_ARRAY(expected_indent_c, buffer, 5);

	//diamond_indents('D', buffer);
	//const unsigned int expected_indent_d[] = {3, 2, 1, 0, 1, 2, 3};
	//TEST_ASSERT_EQUAL_INT_ARRAY(expected_indent_d, buffer, 7);
}

void test_between_is_list_of_how_many_middle_spaces_between_the_repeated_letter_for_each_line_of_the_diamond() {
	unsigned int buffer[1024];

	diamond_between('A', buffer);
	const unsigned int expected_between_a[] = {0};
	TEST_ASSERT_EQUAL_INT_ARRAY(expected_between_a, buffer, 1);

	//diamond_between('B', buffer);
	//const unsigned int expected_between_b[] = {0, 1, 0};
	//TEST_ASSERT_EQUAL_INT_ARRAY(expected_between_b, buffer, 3);

	//diamond_between('C', buffer);
	//const unsigned int expected_between_c[] = {0, 1, 2, 1, 0};
	//TEST_ASSERT_EQUAL_INT_ARRAY(expected_between_c, buffer, 5);

	//diamond_between('D', buffer);
	//const unsigned int expected_between_d[] = {0, 1, 2, 3, 2, 1, 0};
	//TEST_ASSERT_EQUAL_INT_ARRAY(expected_between_d, buffer, 7);
}

void test_one_row_is_a_list_representing_one_diamond_row() {
	char buffer[1024];

	diamond_one_row('A', 'A', 0, 0, buffer);
	TEST_ASSERT_EQUAL_STRING("A", buffer);

	//diamond_one_row('B', 'A', 1, 0, buffer);
	//TEST_ASSERT_EQUAL_STRING(" A", buffer);

	//diamond_one_row('B', 'B', 0, 1, buffer);
	//TEST_ASSERT_EQUAL_STRING("B B", buffer);

	//diamond_one_row('D', 'C', 1, 3, buffer);
	//TEST_ASSERT_EQUAL_STRING(" C   C", buffer);
}

void test_DiamondA_is_correct() {
	char buffer[1024];

	diamond_print('A', buffer);
	TEST_ASSERT_EQUAL_STRING("A\n", buffer);
}

void test_DiamondB_is_correct() {
	char buffer[1024];
	diamond_print('B', buffer);
	TEST_ASSERT_EQUAL_STRING(" A\nB B\n A\n", buffer);
}

void test_DiamondC_is_correct() {
	char buffer[1024];
	diamond_print('C', buffer);
	TEST_ASSERT_EQUAL_STRING("  A\n"
	                         " B B\n"
	                         "C   C\n"
	                         " B B\n"
	                         "  A\n"
	                         , buffer);
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
	                         "   A\n"
	                         , buffer);
}

int main() {
	UnityBegin(__FILE__);
	RUN_TEST(test_diamondA_has_one_line_containing_a);
	//RUN_TEST(test_letter_sequence_is_list_of_letters_on_each_line_of_the_diamond);
	//RUN_TEST(test_indents_is_list_of_indentation_for_each_line_of_the_diamond);
	//RUN_TEST(test_between_is_list_of_how_many_middle_spaces_between_the_repeated_letter_for_each_line_of_the_diamond);
	//RUN_TEST(test_one_row_is_a_list_representing_one_diamond_row);
	//RUN_TEST(test_DiamondA_is_correct);
	//RUN_TEST(test_DiamondB_is_correct);
	//RUN_TEST(test_DiamondC_is_correct);
	//RUN_TEST(test_DiamondD_is_correct);
	return UnityEnd();
}
