#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>

extern char **environ;

/* functions */
int check_string(char *string);
char **tokenizer(char *string);
unsigned int word_counter(char *string);
int _strlen(char *string);
void array_free(char **array);
char *_strncpy(char *dest, char *src, int n);
int commands_functions(char **array, char *string);
void parent_free(char *string, char **array);
void my_env(char **environ);
char *findpath(char *array, char *argv, char num);
char *_getenv(const char *value);
int _strncmp(char *s1, char *s2, int n);
char *_strcat(char *s1, char *s2);
void error_printing(char *argv, char num, char *array);
void print_string(char *string, int new_line);
int _write(char num);

#endif
