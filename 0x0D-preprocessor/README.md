# 0x0D. C - Preprocessor
## Details
      By Julien Barbier & Johan Euphrosine, Software Engineer at Google          Weight: 1              Project over - took place from 11-01-2021 to 11-02-2021          - you're done with 100% of tasks.                Manual QA review was done on 11-09-2021.              An auto review will be launched at the deadline      #### In a nutshell…
* Manual QA review:          0.0/0 mandatory            &            0.0/14 optional      
* Auto QA review:          38.0/38 mandatory      
* Altogether:         100.0%* Mandatory: 100.0%
* Optional: 0.0%
*               Calculation:                   100.0%                    + (100.0% * 0.0%)               == 100.0%

## Resources
Read or watch :
* [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/UlmUG7PSamY2_qL6xze6wg) 

* [Object-like Macros](https://intranet.hbtn.io/rltoken/KAqnlwAvPZ84KI2JFlJpSg) 

* [Macro Arguments](https://intranet.hbtn.io/rltoken/cJyU0mmGRx_Wd9x8WwygOQ) 

* [Pre Processor Directives in C](https://intranet.hbtn.io/rltoken/A5176irunoejPUjwT3pFCQ) 

* [The C Preprocessor](https://intranet.hbtn.io/rltoken/lgohqkU5DlzUBkO2MeMmHA) 

* [Standard Predefined Macros](https://intranet.hbtn.io/rltoken/C47iIZ3tGug6sklTB7hT_Q) 

* [include guard](https://intranet.hbtn.io/rltoken/sqLUMtBCgAAXVdhIaVoaWQ) 

* [Common Predefined Macros](https://intranet.hbtn.io/rltoken/fJJUPJ-zZXlh3db00FEsJw) 

## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/mn8Yoq1uLMNqJfqX1eFYkw) 
 ,  without the help of Google :
### General
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files
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
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) 

* You don’t have to push  ` _putchar.c ` , we will use our file. If you do it won’t be taken into account
* In the following examples, the  ` main.c `  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  ` main.c `  files at compilation. Our  ` main.c `  files might be different from the one shown in the examples
* Don’t forget to push your header file
* All your header files should be include guarded
## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body What are the steps of compilation?
 Quiz question Answers * compiler 2. preprocessor 3. assembler 4. linker
* preprocessor 2.compiler 3. assembler 4. linker
* preprocessor 2.compiler 3. linker 4. assembler
 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body The preprocessor generates assembly code
 Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body The preprocessor generates object code
 Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body The preprocessor links our code with libraries.
 Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #4
    
 Quiz question Body This portion of code is actually using the library stdlib.
 ` #include <stdlib.h>
 `  Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #5
    
 Quiz question Body The preprocessor removes all comments
 Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #6
    
 Quiz question Body What is the   ` gcc `   option that runs only the preprocessor?
 Quiz question Answers * -a

* -P

* -p

* -pedantic

* -E

* -cisfun

* -preprocessor

 Quiz question Tips #### 
        
        Question #7
    
 Quiz question Body  ` NULL `   is a macro
 Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #8
    
 Quiz question Body What will be the last 5 lines of the output of the command   ` gcc -E `   on this code?
 ` #include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
 `  Quiz question Answers *  ` int main(void)
{
 0;
 return (0);
}
 ` 
*  ` int main()
{
 0;
 return (0);
}
 ` 
*  ` int main(void)
{
 ((void *)0);
 return (0);
}
 ` 
*  ` int main(void)
{
 '\0';
 return (0);
}
 ` 
 Quiz question Tips #### 
        
        Question #9
    
 Quiz question Body This code will try to allocate 1024 bytes in the heap:
 ` #define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)
 `  Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #10
    
 Quiz question Body What does the macro   ` TABLESIZE `   expand to?
 ` #define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
 `  Quiz question Answers * 1020

* 37

* nothing

 Quiz question Tips #### 
        
        Question #11
    
 Quiz question Body This is the correct way to define the macro   ` SUB `  :
 ` #define SUB(a, b) a - b
 `  Quiz question Answers * Yes

* No, it should be written this way:
 ` #define SUB(a, b) (a - b)
 ` 
* No, it should be written this way:
 ` #define SUB(a, b) (a) - (b)
 ` 
* No, it should be written this way:
 ` #define SUB(a, b) ((a) - (b))
 ` 
 Quiz question Tips #### 
        
        Question #12
    
 Quiz question Body Why should we use include guards in our header files?
 Quiz question Answers * Because we said so, and we should never ask why.

* To avoid the problem of double inclusion when dealing with the include directive.

 Quiz question Tips #### 
        
        Question #13
    
 Quiz question Body The macro   ` __FILE__ `   expands to the name of the current input file, in the form of a C string constant.
 Quiz question Answers * True

* False

 Quiz question Tips #### 
        
        Question #14
    
 Quiz question Body What will be the output of this program? (on a standard 64 bits, Linux machine)
```bash
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}

```
 Quiz question Answers * Segmentation Fault

* It does not compile

* sizeof(i) = 8

* sizeof(i) = 5

* sizeof(i) = 4

* sizeof(i) = 1

 Quiz question Tips ## Tasks
### 0. Object-like Macro
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Create a header file that defines a macro named   ` SIZE `   as an abbreviation for the token   ` 1024 `  .
```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0D-preprocessor ` 
* File:  ` 0-object_like_macro.h ` 
 Self-paced manual review  Panel footer - Controls 
### 1. Pi
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Create a header file that defines a macro named   ` PI `   as an abbreviation for the token   ` 3.14159265359 `  .
```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0D-preprocessor ` 
* File:  ` 1-pi.h ` 
 Self-paced manual review  Panel footer - Controls 
### 2. File name
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a program that prints the name of the file it was compiled from, followed by a new line.
* You are allowed to use the standard library
```bash
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0D-preprocessor ` 
* File:  ` 2-main.c ` 
 Self-paced manual review  Panel footer - Controls 
### 3. Function-like macro
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function-like macro   ` ABS(x) `   that computes the absolute value of a number   ` x `  .
```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0D-preprocessor ` 
* File:  ` 3-function_like_macro.h ` 
 Self-paced manual review  Panel footer - Controls 
### 4. SUM
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function-like macro   ` SUM(x, y) `   that computes the sum of the numbers   ` x `   and   ` y `  .
```bash
julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0D-preprocessor ` 
* File:  ` 4-sum.h ` 
 Self-paced manual review  Panel footer - Controls 
### 5. Worst abuse of the C preprocessor (IOCCC winner, 1986)
          #advanced         Progress vs Score           Score: 0.00% (Checks completed: 0.00%)         Task Body Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.
* Write a blog post to explain what this program does, how it works, and “de-obfuscate” it step by step for the reader
* You blog post should have at least one picture, at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn
Once done, please add all urls below (blog post, LinkedIn post, etc.)
Please, remember that these blogs must be written in English to further your technical ability in a variety of settings It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.
```bash
julien@ubuntu:~/c/ioccc$ cat hague.c 
#define DIT (
#define DAH )
#define __DAH   ++
#define DITDAH  *
#define DAHDIT  for
#define DIT_DAH malloc
#define DAH_DIT gets
#define _DAHDIT char
_DAHDIT _DAH_[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:"
;main           DIT         DAH{_DAHDIT
DITDAH          _DIT,DITDAH     DAH_,DITDAH DIT_,
DITDAH          _DIT_,DITDAH        DIT_DAH DIT
DAH,DITDAH      DAH_DIT DIT     DAH;DAHDIT
DIT _DIT=DIT_DAH    DIT 81          DAH,DIT_=_DIT
__DAH;_DIT==DAH_DIT DIT _DIT        DAH;__DIT
DIT'\n'DAH DAH      DAHDIT DIT      DAH_=_DIT;DITDAH
DAH_;__DIT      DIT         DITDAH
_DIT_?_DAH DIT      DITDAH          DIT_ DAH:'?'DAH,__DIT
DIT' 'DAH,DAH_ __DAH    DAH DAHDIT      DIT
DITDAH          DIT_=2,_DIT_=_DAH_; DITDAH _DIT_&&DIT
DITDAH _DIT_!=DIT   DITDAH DAH_>='a'?   DITDAH
DAH_&223:DITDAH     DAH_ DAH DAH;       DIT
DITDAH          DIT_ DAH __DAH,_DIT_    __DAH DAH
DITDAH DIT_+=       DIT DITDAH _DIT_>='a'?  DITDAH _DIT_-'a':0
DAH;}_DAH DIT DIT_  DAH{            __DIT DIT
DIT_>3?_DAH     DIT          DIT_>>1 DAH:'\0'DAH;return
DIT_&1?'-':'.';}__DIT DIT           DIT_ DAH _DAHDIT
DIT_;{DIT void DAH write DIT            1,&DIT_,1 DAH;}
julien@ubuntu:~/c/ioccc$ gcc -std=gnu89 hague.c -o h
hague.c: In function ‘main’:                                                                                                                                                                                
hague.c:6:17: warning: conflicting types for built-in function ‘malloc’; expected ‘void *(long unsigned int)’ [-Wbuiltin-declaration-mismatch]                                                              
    6 | #define DIT_DAH malloc                                                                                                                                                                              
      |                 ^~~~~~                                                                                                                                                                              
hague.c:12:40: note: in expansion of macro ‘DIT_DAH’                                                                                                                                                        
   12 |    DITDAH          _DIT_,DITDAH        DIT_DAH DIT                                                                                                                                                  
      |                                        ^~~~~~~                                                                                                                                                      
hague.c:1:1: note: ‘malloc’ is declared in header ‘<stdlib.h>’                                                                                                                                              
  +++ |+#include <stdlib.h>                                                                                                                                                                                 
    1 | #define DIT (                                                                                                                                                                                       
/usr/bin/ld: /tmp/cczAyJcz.o: in function `main':                                                                                                                                                           
hague.c:(.text+0x151): warning: the `gets' function is dangerous and should not be used.    
julien@ubuntu:~/c/ioccc$ ./h 
Hello, World                                                                                                                                                                                                
.... . .-.. .-.. --- --..-- ? .-- --- .-. .-.. -..     
julien@ubuntu:~/c/ioccc$ 

```
 Task URLs #### Add URLs here:
                Save               Github information  Self-paced manual review  Panel footer - Controls 
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