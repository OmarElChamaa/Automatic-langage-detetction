#ifndef __UTILS_H
#define __UTILS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ALPHABET_TAILLE 26

size_t ascii_to_index(char c);
void remove_char(char *word, size_t index);
void parse_word(char *word);
char* concat(const char *s1, const char *s2);

#endif