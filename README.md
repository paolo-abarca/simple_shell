![Logo](https://getlogovector.com/wp-content/uploads/2020/11/holberton-school-logo-vector.png)
# SIMPLE SHELL PROJECT

## Description
It is a program that provides an interface for users to gain access to kernel services. In other words, it can interpret and execute command line arguments read from standard input. Then analyze the command line and if it is valid it will execute.
## Resources

- [Unix shell](https://en.wikipedia.org/wiki/Unix_shell)
- [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell)
- [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)

## Get Started
Clone the project

```bash
  git clone https://github.com/paolo-abarca/simple_shell.git
```

Go to the project directory

```bash
  cd simple_shell
```

## Compilation

Your shell will be compiled this way:

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Testing
Your shell should work like this in interactive mode:

```shell
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```shell
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## List of functions and system calls used

- `execve ` (man 2 execve)
- `exit `  (man 3 exit)
- `fork `  (man 2 fork)
- `free ` (man 3 free)
- `getline `  (man 3 getline)
- `isatty ` (man 3 isatty)
- `malloc `  (man 3 malloc)
- `perror ` (man 3 perror)
- `stat ` (man 2 stat)
- `strtok  `  (man 2 fstat)
- `wait   ` (man 2 wait)
- `write   `  (man 2 write)
- `signal ` (man 2 signal)

## List of funciones

Function  | Description
------------- | -------------
check_string | Function to check the string for delimiters
tokenizer | Function that tokenizes the text string
word_counter | Function to count the words entered to the terminal
array_free | Function that releases double pointer
commands_functions |  exclusive function for exit and env
my_env |  Function that prints all global variables
findpath | Function to find folder from command path
_getenv |  Function to get the folders from the PATH variable


## Examples interactive 

```shell
('0_0)=c[_] /bin/ls
README.md     check_string.c        findpath.c         hsh      tokenizer.c
a.out         commands_functions.c  get_environ.c      main.h
array_free.c  error_print.c         holberton_tools.c  shell.c
```

```shell
('0_0)=c[_] ls -l
total 80
-rwxrwxrwx 1 root root  2206 Apr 11 06:37 README.md
-rwxrwxrwx 1 root root 22392 Apr 11 16:45 a.out
-rwxrwxrwx 1 root root   507 Apr 11 16:25 array_free.c
-rwxrwxrwx 1 root root   328 Apr 11 16:25 check_string.c
-rwxrwxrwx 1 root root   883 Apr 11 16:25 commands_functions.c
-rwxrwxrwx 1 root root  1132 Apr 11 16:25 error_print.c
-rwxrwxrwx 1 root root   832 Apr 11 16:25 findpath.c
-rwxrwxrwx 1 root root   387 Apr 11 16:25 get_environ.c
-rwxrwxrwx 1 root root  1503 Apr 11 16:25 holberton_tools.c
-rwxrwxrwx 1 root root 22392 Apr 11 16:45 hsh
-rwxrwxrwx 1 root root   913 Apr 11 16:25 main.h
-rwxrwxrwx 1 root root   924 Apr 11 16:26 shell.c
-rwxrwxrwx 1 root root  1182 Apr 11 16:25 tokenizer.c
```

## Examples non -interactive 

```shell
gerardo@LAPTOP-AQ6UPBQG:/mnt/d/Holberton/simple_shell$ echo "/bin/ls" | ./hsh
README.md     check_string.c        findpath.c         hsh      tokenizer.c
a.out         commands_functions.c  get_environ.c      main.h
array_free.c  error_print.c         holberton_tools.c  shell.c
```

```shell
gerardo@LAPTOP-AQ6UPBQG:/mnt/d/Holberton/simple_shell$ echo "ls -l" | ./hsh
total 80
-rwxrwxrwx 1 root root  2206 Apr 11 06:37 README.md
-rwxrwxrwx 1 root root 22392 Apr 11 16:45 a.out
-rwxrwxrwx 1 root root   507 Apr 11 16:25 array_free.c
-rwxrwxrwx 1 root root   328 Apr 11 16:25 check_string.c
-rwxrwxrwx 1 root root   883 Apr 11 16:25 commands_functions.c
-rwxrwxrwx 1 root root  1132 Apr 11 16:25 error_print.c
-rwxrwxrwx 1 root root   832 Apr 11 16:25 findpath.c
-rwxrwxrwx 1 root root   387 Apr 11 16:25 get_environ.c
-rwxrwxrwx 1 root root  1503 Apr 11 16:25 holberton_tools.c
-rwxrwxrwx 1 root root 22392 Apr 11 16:45 hsh
-rwxrwxrwx 1 root root   913 Apr 11 16:25 main.h
-rwxrwxrwx 1 root root   924 Apr 11 16:26 shell.c
-rwxrwxrwx 1 root root  1182 Apr 11 16:25 tokenizer.c
```

```shell
gerardo@LAPTOP-AQ6UPBQG:/mnt/d/Holberton/simple_shell$ echo "pwd" | ./hsh
/mnt/d/Holberton/simple_shell
```

## Authors
- Gerardo Marin Parra - [@GerardoMarin](https://github.com/gerardomp18)
- Paolo Abarca - [@PaoloAbarca](https://github.com/paolo-abarca)
