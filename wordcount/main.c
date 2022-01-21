#include <stdio.h>
#include "word_count.h"
#include <string.h>


int main() {
    printf("Hello, World!\n");
    return 0;
}

int word_count(const char *input_text, word_count_word_t *words){
   char word_list[MAX_WORDS_LENGTH];
   char input[1000];
    stpcpy(input, input_text);
    char *p_str = input;

    /* index for iteration over input string*/
    int index = 0;

    /* index for word_list*/
    int index_list = 0;

    /* Counts all words */
    int counts_all = 0;

    /* for controlling the while loop*/


}
