#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <signal.h>

extern char **environ;

/* functions */
int check_string(char *string);
char **tokenizer(char *string);
int _strlen(char *string);
unsigned int word_counter(char *string);
void array_free(char **array);
char *_strncpy(char *dest, char *src, int n);
int commands_functions(char *string, char **array, int *retVal);
int _strncmp(char *s1, char *s2, int n);
void parent_free(char *string, char **array);
void my_env(char **environ);
char *findpath(char *array, int *retVal, char num);
char *_getenv(const char *name);
char *_strcat(char *s1, char *s2);
void error_printing(char *av, char count, char *command);
void print_string(char *string, int new_line);
int _write(char c);

#endif
