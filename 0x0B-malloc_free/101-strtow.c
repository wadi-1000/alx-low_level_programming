#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            in_word = 0;
        } else if (in_word == 0) {
            count++;
            in_word = 1;
        }
    }
    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings (words) or NULL if str is NULL or empty.
 */
char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    char *token = strtok(str, " \t\n");

    while (token != NULL) {
        words[word_index] = strdup(token);
        if (words[word_index] == NULL) {
            for (int i = 0; i < word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        word_index++;
        token = strtok(NULL, " \t\n");
    }

    words[word_index] = NULL;
    return words;
}
