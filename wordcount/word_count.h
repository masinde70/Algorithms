//
// Created by masinde mtesigwa on 21.1.2022.
//

#ifndef WORDCOUNT_WORD_COUNT_H
#define WORDCOUNT_WORD_COUNT_H

#define MAX_WORDS 20
#define  MAX_WORDS_LENGTH 50

// results structure
typedef struct word_count_word{
    char text[MAX_WORDS_LENGTH];
    int count;
} word_count_word_t;

int word_count(const char *input_text, word_count_word_t *words);

#endif //WORDCOUNT_WORD_COUNT_H
