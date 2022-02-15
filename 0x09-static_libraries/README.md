# 0x09. C - Static libraries
## Details
      By Julien Barbier          Weight: 1              Project over - took place from 10-22-2021 to 10-23-2021          - you're done with 100% of tasks.                Manual QA review was done by Diego Jojoa Jojoa on 10-30-2021.              An auto review will be launched at the deadline      #### In a nutshell…
* Manual QA review:          6.0/12 mandatory      
* Auto QA review:          23.3/24 mandatory      
* Altogether:         81.39%* Mandatory: 81.39%
* Optional: no optional tasks

## Concepts
For this project, students are expected to look at this concept:
* [C static libraries](https://intranet.hbtn.io/concepts/61) 

## Resources
Read or watch :
* [What Is A “C” Library? What Is It Good For?](https://intranet.hbtn.io/rltoken/4Dki8HiSS6QBDwsznMbXFA) 

* [Creating A Static “C” Library Using “ar” and “ranlib”](https://intranet.hbtn.io/rltoken/4Dki8HiSS6QBDwsznMbXFA) 

* [Using A “C” Library In A Program](https://intranet.hbtn.io/rltoken/4Dki8HiSS6QBDwsznMbXFA) 

* [What is difference between Dynamic and Static library(Static and Dynamic linking)](https://intranet.hbtn.io/rltoken/wC9HCOvJwa_Co1nZuL4QMA) 
 (stop at 4:44)
man or help :
*  ` ar ` 
*  ` ranlib ` 
*  ` nm ` 
## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/cZ0J1_hgEsea3mJQHuVjQw) 
 ,  without the help of Google :
### General
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of  ` ar ` ,  ` ranlib ` ,  ` nm ` 
## Requirements
### C
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* All your files will be compiled on Ubuntu 20.04 LTS using  ` gcc ` , using the options  ` -Wall -Werror -Wextra -pedantic -std=gnu89 ` 
* All your files should end with a new line
* A  ` README.md `  file, at the root of the folder of the project is mandatory
* Your code should use the  ` Betty `  style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) 
 and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 

* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like  ` printf ` ,  ` puts ` , etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) 

* You don’t have to push  ` _putchar.c ` , we will use our file. If you do it won’t be taken into account
* In the following examples, the  ` main.c `  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  ` main.c `  files at compilation. Our  ` main.c `  files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function  ` _putchar `  should be included in your header file called  ` main.h ` 
* Don’t forget to push your header file
### Bash
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789) 
)
* The first line of all your files should be exactly  ` #!/bin/bash ` 
* A  ` README.md `  file, at the root of the folder of the project, describing what each script is doing
* All your files must be executable
## More Info
You do not need to learn about dynamic libraries, yet.
### Manual QA Review
It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.
## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body What command is used to create a static library from object files?
 Quiz question Answers * gcc

* ld

* ranlib

* ar

* nm

 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body What is the point of using   ` ranlib `  ?
 Quiz question Answers * Creating an archive

* Indexing an archive

* Create a library from a simple archive

* List the content of a library

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body What command(s) can be used to list the symbols stored in a static library?
 Quiz question Answers * nm

* ranlib

* ar

* ld

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body What is the format of a static library?
 Quiz question Answers * A relocatable ELF file

* An executable ELF file

* A shared ELF file

* An archive

 Quiz question Tips ## Tasks
### 0. A library is not a luxury but one of the necessities of life
          mandatory         Progress vs Score           Score: 96.82% (Checks completed: 100.00%)         Task Body Create the static library   ` libmy.a `   containing all the functions listed below:
```bash
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

```
If you haven’t coded all of the above functions create empty ones with the right prototype. Don’t forget to push your   ` main.h `   file to your repository. It should at least contain all the prototypes of the above functions.
```bash
julien@ubuntu:~/0x09. Static Librairies$ ar -t libmy.a 
0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$ nm libmy.a 

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write
julien@ubuntu:~/0x09. Static Librairies$ cat main.c 
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
julien@ubuntu:~/0x09. Static Librairies$ gcc -std=gnu89 main.c -L. -lmy -o quote
julien@ubuntu:~/0x09. Static Librairies$ ./quote 
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
julien@ubuntu:~/0x09. Static Librairies$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x09-static_libraries ` 
* File:  ` libmy.a, main.h ` 
 Self-paced manual review  Panel footer - Controls 
### 1. Without libraries what have we? We have no past and no future
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Create a script called   ` create_static_lib.sh `   that creates a static library called   ` liball.a `   from all the   ` .c `   files that are in the current directory.
```bash
julien@ubuntu:~/0x09. Static Librairies$ ls *.c
0-isupper.c  0-strcat.c  1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c  4-isalpha.c  5-strstr.c  9-strcpy.c  _putchar.c
0-memset.c   100-atoi.c  1-memcpy.c   2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c  4-strpbrk.c  6-abs.c
julien@ubuntu:~/0x09. Static Librairies$ ./create_static_lib.sh 
julien@ubuntu:~/0x09. Static Librairies$ ls *.a
liball.a
julien@ubuntu:~/0x09. Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
julien@ubuntu:~/0x09. Static Librairies$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x09-static_libraries ` 
* File:  ` create_static_lib.sh ` 
 Self-paced manual review  Panel footer - Controls 
### 2. Either write something worth reading or do something worth writing
          mandatory         Progress vs Score           Score: 50.00% (Checks completed: 100.00%)         Task Body Write a blog post on C static libraries. It should cover:
* Why use libraries
* How they work
* How to create them
* How to use them
Your posts should have examples and at least one picture, at the top. Publish your blog post on Medium or LinkedIn, and share it at least on LinkedIn.
When done, please add all urls below (blog post, LinkedIn post, etc.)
Please, remember that these blogs must be written in English to further your technical ability in a variety of settings
 Task URLs #### Add URLs here:
                Save              [https://www.linkedin.com/posts/jhon-jairo-pulido-462a9066_c-static-libraries-activity-6858508690274729984-KqwQ](https://www.linkedin.com/posts/jhon-jairo-pulido-462a9066_c-static-libraries-activity-6858508690274729984-KqwQ) 
                  Remove                [https://medium.com/@3825_30593/c-static-libraries-c4081cfa2e96](https://medium.com/@3825_30593/c-static-libraries-c4081cfa2e96) 
                  Remove                [https://twitter.com/PulidoLasso/status/1452745361865547786?s=20](https://twitter.com/PulidoLasso/status/1452745361865547786?s=20) 
                  Remove                 Github information  Self-paced manual review  Panel footer - Controls 
Ready for a manualsecond review×#### Recommended Sandbox
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