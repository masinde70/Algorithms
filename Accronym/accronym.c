//
// Created by masinde on 25.1.2022.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "accronym.h"


char * abbreviate(const char *phrase)
{
    char str[80];
    strcpy(str, phrase);
    char *p_str = str;
    static char acr[80];:
    strcpy(acr, "");

   /* For counting the words */
   int counter = 0;

   /* for position the words*/
   int index = 0;

   /*for loop variable*/
   int i = 0;

   /*
    *  counts the empty-characters.
    *  to determine the number of the words
    */

   while(p_str && (i < 80))
   {
       if (*p_str == ' ')
       {
           counter++;
       }
       if (i < 80)
       {
            p_str++;
            i++;
       }
   }


}
