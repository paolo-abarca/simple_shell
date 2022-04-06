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

- `access ` (man 2 access)
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

## List of funciones

Function  | Description
------------- | -------------
array_free  | Function to release the array
check_string | Function to check the string for delimiters 
counter  | Function to count the words entered to the terminal
executing_comand | Function that executes commands and handles errors
tokenizer | Function that tokenizes the text string

## Examples interactive 

```C

```
## Examples non -interactive 
```C

```
## Authors
- Gerardo Marin Parra - [@GerardoMarin](https://github.com/gerardomp18)
- Paolo Abarca - [@PaoloAbarca](https://github.com/paolo-abarca)
