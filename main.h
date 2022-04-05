#ifndef MAIN_H
#define MAIN_H

/* header libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* functions */
extern char **environ;
int check_string(char *string);
char **tokenizer(char *string, const char *delimiter);
int counter(char *string);
void array_free(char **array);
int executing_comand(char **array, char *argv, int num);

#endif
