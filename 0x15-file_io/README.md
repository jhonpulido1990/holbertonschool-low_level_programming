# 0x15. C - File I/O
## Details
      By Julien Barbier          Weight: 1              Project over - took place from 11-22-2021 to 11-24-2021          - you're done with 100% of tasks.              An auto review will be launched at the deadline      #### In a nutshell…
* Auto QA review:          43.0/43 mandatory            &            0.0/9 optional      
* Altogether:         100.0%* Mandatory: 100.0%
* Optional: 0.0%
*               Calculation:                   100.0%                    + (100.0% * 0.0%)               == 100.0%

## Resources
Read or watch :
* [File descriptors](https://intranet.hbtn.io/rltoken/zwnc2vqfmCs_ZThsyxkjJw) 

* [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://intranet.hbtn.io/rltoken/Ig_LMzPlXTT-EwoSAgYK-Q) 

man or help :
*  ` open ` 
*  ` close ` 
*  ` read ` 
*  ` write ` 
*  ` dprintf ` 
## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/P0824k6np2sTua7wMdZL-Q) 
 ,  without the help of Google :
### General
* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their  ` POSIX `  names
* How to use the I/O system calls  ` open ` ,  ` close ` ,  ` read `  and  ` write ` 
* What are and how to use the flags  ` O_RDONLY ` ,  ` O_WRONLY ` ,  ` O_RDWR ` 
* What are file permissions, and how to set them when creating a file with the  ` open `  system call
* What is a system call
* What is the difference between a function and a system call
## Requirements
### General
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* All your files will be compiled on Ubuntu 20.04 LTS using  ` gcc ` , using the options  ` -Wall -Werror -Wextra -pedantic -std=gnu89 ` 
* All your files should end with a new line
* A  ` README.md `  file, at the root of the folder of the project is mandatory
* Your code should use the  ` Betty `  style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) 
 and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 

* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are  ` malloc ` ,  ` free `  and  ` exit ` . Any use of functions like  ` printf ` ,  ` puts ` ,  ` calloc ` ,  ` realloc `  etc… is forbidden
* Allowed syscalls:  ` read ` ,  ` write ` ,  ` open ` ,  ` close ` 
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) 

* You don’t have to push  ` _putchar.c ` , we will use our file. If you do it won’t be taken into account
* In the following examples, the  ` main.c `  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  ` main.c `  files at compilation. Our  ` main.c `  files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function  ` _putchar `  should be included in your header file called  ` main.h ` 
* Don’t forget to push your header file
* All your header files should be include guarded
* Tip: always prefer using symbolic constants ( ` POSIX ` ) vs numbers when it makes sense. For instance  ` read(STDIN_FILENO, ... `  vs  ` read(0, ... ` 
## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body What is the   ` unistd `   symbolic constant for the standard input?
 Quiz question Answers * STDIN_FILENO

* STDOUT_FILENO

* STDERR_FILENO

 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body What is the   ` unistd `   symbolic constant for the standard output?
 Quiz question Answers * STDIN_FILENO

* STDOUT_FILENO

* STDERR_FILENO

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body What is the   ` unistd `   symbolic constant for the Standard error?
 Quiz question Answers * STDIN_FILENO

* STDOUT_FILENO

* STDERR_FILENO

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body What is the   ` oflag `   used to open a file with the mode read only?
 Quiz question Answers *  ` O_WRONLY ` 

*  ` O_RDONLY ` 

*  ` O_RDWR ` 

 Quiz question Tips #### 
        
        Question #4
    
 Quiz question Body What is the   ` oflag `   used to open a file in mode read + write?
 Quiz question Answers *  ` O_WRONLY ` 

*  ` O_RDONLY ` 

*  ` O_RDWR ` 

 Quiz question Tips #### 
        
        Question #5
    
 Quiz question Body What is the correct combination of   ` oflag `  s used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?
 Quiz question Answers *  ` O_WRONLY ` 

*  ` O_WRONLY | O_CREAT | O_EXCL ` 

*  ` O_WRONLY | O_CREAT | O_APPEND ` 

*  ` O_RDWR | O_CREAT | O_APPEND ` 

 Quiz question Tips #### 
        
        Question #6
    
 Quiz question Body is   ` open `   a function or a system call? (select all valid answers)
 Quiz question Answers * it’s a function

* it’s a system call

* it’s a library call

* it’s a function provided by the kernel

* it’s a kernel routine

 Quiz question Tips #### 
        
        Question #7
    
 Quiz question Body What system call would you use to write to a file descriptor? (select all correct answers)
 Quiz question Answers * printf

* fprintf

* write

 Quiz question Tips #### 
        
        Question #8
    
 Quiz question Body Without context, on Ubuntu 14.04 LTS,   ` write `   is a … (please select all correct answers):
 Quiz question Answers * executable

* system call

* library call

* game

* kernel routine

 Quiz question Tips #### 
        
        Question #9
    
 Quiz question Body What is the return value of the system call   ` open `   if it fails?
 Quiz question Answers * 0

* -1

* 98

 Quiz question Tips #### 
        
        Question #10
    
 Quiz question Body Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with   ` open `   (if   ` open `   succeeds of course):
 Quiz question Answers * 0

* 1

* 2

* 3

* 4

* 5

* 6

 Quiz question Tips #### 
        
        Question #11
    
 Quiz question Body why? #AlwaysAskWhy
 Quiz question Answers * Because this will be the first opened file descriptor and in CS we start counting starting from   ` 0 ` 

* Because this will be the first opened file descriptor and we start counting starting from   ` 1 ` 

* Because this will be the second opened file descriptor for my process

* Because this will be the third opened file descriptor for my process

* Because most of the time, I will already have   ` stdin `   (value 0),   ` stdout `   (value   ` 1 `  ) and   ` stderr `   (value 2) opened when my program starts executing.

* I don’t care I never ask why, just let me access the tasks!

 Quiz question Tips #### 
        
        Question #12
    
 Quiz question Body Which of these answers are the equivalent of   ` O_RDWR `   on Ubuntu 14.04 LTS? (select all correct answers):
 Quiz question Answers * O_RDONLY

* 1

* 2

* 3

* 1 << 1

* 3 & 2

* 3 | 2

* O_WRONLY

* (O_RDONLY + O_WRONLY)

* (O_RDONLY | O_WRONLY)

* (O_RDONLY & O_WRONLY)

* (O_RDONLY && O_WRONLY)

* (O_RDONLY << 1)

* (O_WRONLY << 1)

* 0

 Quiz question Tips #### Tips:
Use   ` printf `   or read the headers to see the definitions/values of these macros.
#### 
        
        Question #13
    
 Quiz question Body What happens if you try to write “Best” to the standard  input  on Ubuntu 14.04 LTS?
 Quiz question Answers * Nothing

* Segmentation fault

* The text will be printed on the terminal but I can’t pipe it

* The text will be printed on the terminal on the standard output

 Quiz question Tips #### Tips:
Just try it! :)
#### 
        
        Question #14
    
 Quiz question Body When I am using   ` O_WRONLY | O_CREAT | O_APPEND `   -> the   ` | `   are bitwise operators.
 Quiz question Answers * True

* False

 Quiz question Tips ## Tasks
### 0. Tread lightly, she is near
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that reads a text file and prints it to the   ` POSIX `   standard output.
* Prototype:  ` ssize_t read_textfile(const char *filename, size_t letters); ` 
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return  ` 0 ` 
* if  ` filename `  is  ` NULL `  return  ` 0 ` 
* if  ` write `  fails or does not write the expected amount of bytes, return  ` 0 ` 
```bash
julien@ubuntu:~/0x15. File descriptors and permissions$ cat Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.
julien@ubuntu:~/0x15. File descriptors and permissions$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
julien@ubuntu:~/0x15. File descriptors and permissions$ ./a Requiescat 
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)
julien@ubuntu:~/0x15. File descriptors and permissions$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x15-file_io ` 
* File:  ` 0-read_textfile.c ` 
 Self-paced manual review  Panel footer - Controls 
### 1. Under the snow
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Create a function that creates a file.
* Prototype:  ` int create_file(const char *filename, char *text_content); ` 
* where  ` filename `  is the name of the file to create and  ` text_content `  is a  ` NULL `  terminated string to write to the file
* Returns:  ` 1 `  on success,  ` -1 `  on failure (file can not be created, file can not be written,  ` write `  “fails”, etc…)
* The created file must have those permissions:  ` rw------- ` . If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if  ` filename `  is  ` NULL `  return  ` -1 ` 
* if  ` text_content `  is  ` NULL `  create an empty file
```bash
julien@ubuntu:~/0x15. File descriptors and permissions$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
julien@ubuntu:~/0x15. File descriptors and permissions$ ./b hello world
-> 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw------- 1 julien julien 5 Dec  3 14:28 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello 
worldjulien@ubuntu:~/0x15. File descriptors and permis$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x15-file_io ` 
* File:  ` 1-create_file.c ` 
 Self-paced manual review  Panel footer - Controls 
### 2. Speak gently, she can hear
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that appends text at the end of a file.
* Prototype:  ` int append_text_to_file(const char *filename, char *text_content); ` 
* where  ` filename `  is the name of the file and  ` text_content `  is the  ` NULL `  terminated string to add at the end of the file
* Return:  ` 1 `  on success and  ` -1 `  on failure
* Do not create the file if it does not exist
* If  ` filename `  is  ` NULL `  return  ` -1 ` 
* If  ` text_content `  is  ` NULL ` , do not add anything to the file. Return  ` 1 `  if the file exists and  ` -1 `  if the file does not exist or if you do not have the required permissions to write the file
```bash
julien@ubuntu:~/0x15. File descriptors and permissions$ cat 2-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
julien@ubuntu:~/0x15. File descriptors and permissions$ echo -n Hello > hello
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l hello
-rw-rw-r-- 1 julien julien 5 Dec  3 14:48 hello
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
julien@ubuntu:~/0x15. File descriptors and permissions$ ./c hello " World!
> "
-> 1)
julien@ubuntu:~/0x15. File descriptors and permissions$ cat hello 
Hello World!
julien@ubuntu:~/0x15. File descriptors and permissions$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x15-file_io ` 
* File:  ` 2-append_text_to_file.c ` 
 Self-paced manual review  Panel footer - Controls 
### 3. cp
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a program that copies the content of a file to another file.
* Usage:  ` cp file_from file_to ` 
* if the number of argument is not the correct one, exit with code  ` 97 `  and print  ` Usage: cp file_from file_to ` , followed by a new line, on the  ` POSIX `  standard error
* if  ` file_to `  already exists, truncate it
* if  ` file_from `  does not exist, or if you can not read it, exit with code  ` 98 `  and print  ` Error: Can't read from file NAME_OF_THE_FILE ` , followed by a new line, on the  ` POSIX `  standard error* where  ` NAME_OF_THE_FILE `  is the first argument passed to your program

* if you can not create or if  ` write `  to  ` file_to `  fails, exit with code  ` 99 `  and print  ` Error: Can't write to NAME_OF_THE_FILE ` , followed by a new line, on the  ` POSIX `  standard error* where  ` NAME_OF_THE_FILE `  is the second argument passed to your program

* if you can not close a file descriptor , exit with code  ` 100 `  and print  ` Error: Can't close fd FD_VALUE ` , followed by a new line, on the  ` POSIX `  standard error* where  ` FD_VALUE `  is the value of the file descriptor

* Permissions of the created file:  ` rw-rw-r-- ` . If the file already exists, do not change the permissions
* You must read  ` 1,024 `  bytes at a time from the  ` file_from `  to make less system calls. Use a buffer
* You are allowed to use  ` dprintf ` 
```bash
julien@ubuntu:~/0x15. File descriptors and permissions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
julien@ubuntu:~/0x15. File descriptors and permissions$ cat incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
julien@ubuntu:~/0x15. File descriptors and permissions$ ./cp incitatous Incitatous
julien@ubuntu:~/0x15. File descriptors and permissions$ ls -l Incitatous 
-rw-rw-r-- 1 julien julien 158 Dec  3 15:39 Incitatous
julien@ubuntu:~/0x15. File descriptors and permissions$ cat Incitatous 
Why you should think twice before putting pictures on social media.
(What you always wanted to know about @Incitatous)
#PrivacyAware
http://imgur.com/a/Mq1tc
julien@ubuntu:~/0x15. File descriptors and permissions$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x15-file_io ` 
* File:  ` 3-cp.c ` 
 Self-paced manual review  Panel footer - Controls 
[Done with the mandatory tasks? Unlock 1 advanced task now!](https://intranet.hbtn.io/projects/234/unlock_optionals) 

×#### Recommended Sandbox
[Running only]() 
### 1 image(1/5 Sandboxes spawned)
### Ubuntu 20.04
Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Holberton Foundations
SSHSFTP[Webterm](https://intranet.hbtn.io/user_containers/17836/webterm) 
[Destroy]() 
#### Credentials
Host4aa76ec2605d.ba0aa7bd.hbtn-cod.ioUsername4aa76ec2605dPassword95896abd009a136e84ba#### Web access
[HTTPS](https://4aa76ec2605d.ba0aa7bd.hbtn-cod.io/) 
[HTTP](http://4aa76ec2605d.ba0aa7bd.hbtn-cod.io/) 
[3000](http://4aa76ec2605d.ba0aa7bd.hbtn-cod.io:3000/) 
[4000](http://4aa76ec2605d.ba0aa7bd.hbtn-cod.io:4000/) 
[5000](http://4aa76ec2605d.ba0aa7bd.hbtn-cod.io:5000/) 
[5001](http://4aa76ec2605d.ba0aa7bd.hbtn-cod.io:5001/) 
[8000](http://4aa76ec2605d.ba0aa7bd.hbtn-cod.io:8000/) 
[8080](http://4aa76ec2605d.ba0aa7bd.hbtn-cod.io:8080/) 
#### Port mapping
SSH49328HTTP49327HTTPS49326300049325MySQL49324400049323500049322500149321800049320808049319