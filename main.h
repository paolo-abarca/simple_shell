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
#include <time.h>
#include <libgen.h>

extern char **environ;

/* functions */
int check_string(char *string);
char **tokenizer(char *string);
unsigned int word_counter(char *string);
void array_free(char **array);
int commands_functions(char *string, char **array, int *retVal);
void parent_free(char *string, char **array);
void my_env(char **environ);
char *findpath(char *array, int *retVal);
char *_strcat(char *s1, char *s2);


char *_getenv(const char *name);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *_strncpy(char *dest, char *src, int n);
void error_printing(char *av, int count, char *command);
void exec_error(char *av, int count, char *tmp_command);
void print_string(char *str, int new_line);
int print_number(int n);
int _write(char c);

#endif
