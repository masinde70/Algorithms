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
    int loop = 1;

    /* for the for-loop */
    int i = 0;

    /* collects all words in the word_list */

    while (input[index] && loop)
    {
        if (input[index] == ' ')
        {
            input[index] = '\0';
            if (strlen(p_str) <= MAX_WORDS_LENGTH)
            {
                if (index_list <= MAX_WORDS)
                {
                    strcpy(word_list[index_list], p_str);
                    /* sets pointer to next position*/
                    p_str = input + index + 1;
                    index_list++;

                    /* counts the word */
                    counts_all ++;
                }
                else /* error case too many words */
                {
                    counts_all = EXCESSIVE_NUMBER_OF_WORDS;
                    loop = 0;
                }
            } else /* error case word too long */
            {
                counts_all = EXCESSIVE_LENGTH_WORD;
                loop = 0;
            }
        }
    }

}
