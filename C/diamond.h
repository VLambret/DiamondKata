#pragma once

void diamond_print(const char init_char, char *buffer);

void diamond_letter_sequence(const char init_char, char *buffer);

void diamond_indents(const char init_char, unsigned int *buffer);

void diamond_between(const char init_char, unsigned int *buffer);

void diamond_one_row(const char init_char,
                     const char line_char,
                     const unsigned int indent,
                     const unsigned int between,
                     char *buffer);

void diamond_rows(const char init_char, char *buffer);
