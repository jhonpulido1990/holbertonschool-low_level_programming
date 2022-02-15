# 0x00. C - Hello, World
## Details
      By Julien Barbier          Weight: 1              Project over - took place from 09-30-2021 to 10-01-2021          - you're done with 138% of tasks.                Manual QA review was done on 10-08-2021.              An auto review will be launched at the deadline      #### In a nutshell…
* Manual QA review:          0.0/10 mandatory      
* Auto QA review:          41.0/41 mandatory            &            5.0/12 optional      
* Altogether:         113.89%* Mandatory: 80.39%
* Optional: 41.67%
*               Calculation:                   80.39%                    + (80.39% * 41.67%)               == 113.89%

 ![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg) 

## Resources
Read or watch :
* [Everything you need to know to start with C.pdf](https://intranet.hbtn.io/rltoken/d6TBbj0HA4EvnmpqvEz68Q) 
 (You do not have to learn everything in there yet, but make sure you read it entirely first)
* [Dennis Ritchie](https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA) 

* [“C” Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw) 

* [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw) 

* [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg) 

* [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA) 

* [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg) 

* [Betty Coding Style](https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw) 

* [Hash-bang under the hood](https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q) 
 (Look at only after you finish consuming the other resources)
* [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw) 
 (Look at only after you finish consuming the other resources)
man or help :
*  ` gcc ` 
*  ` printf (3) ` 
*  ` puts ` 
*  ` putchar ` 
## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/IU8pPF3LtFsVkcyn4BUITA) 
 ,  without the help of Google :
### General
* Why C programming is awesome 
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type  ` gcc main.c ` 
* What is an entry point
* What is  ` main ` 
* How to print text using  ` printf ` ,  ` puts `  and  ` putchar ` 
* How to get the size of a specific type using the unary operator  ` sizeof ` 
* How to compile using  ` gcc ` 
* What is the default program name when compiling with  ` gcc ` 
* What is the official C coding style and how to check your code with  ` betty-style ` 
* How to find the right header to include in your source code when using a standard library function
* How does the  ` main `  function influence the return value of the program
## Requirements
### C
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* All your files will be compiled on Ubuntu 20.04 LTS using  ` gcc ` , using the options  ` -Wall -Werror -Wextra -pedantic -std=gnu89 ` 
* All your files should end with a new line
* A  ` README.md `  file at the root of the repo, containing a description of the repository
* A  ` README.md `  file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* You are not allowed to use  ` system ` 
* Your code should use the  ` Betty `  style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) 
 and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl) 

### Shell Scripts
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your scripts should be exactly two lines long ( ` $ wc -l file `  should print 2)
* All your files should end with a new line
* The first line of all your files should be exactly  ` #!/bin/bash ` 
## More Info
### Betty linter
To run the Betty linter just with command   ` betty <filename> `  :
* Go to the [Betty](https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ) 
 repository
* Clone the [repo](https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ) 
 to your local machine
*  ` cd `  into the Betty directory
* Install the linter with  ` sudo ./install.sh ` 
*  ` emacs `  or  ` vi `  a new file called  ` betty ` , and copy the script below:
```bash
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

```
* Once saved, exit file and change permissions to apply to all users with  ` chmod a+x betty ` 
* Move the  ` betty `  file into  ` /bin/ `  directory or somewhere else in your  ` $PATH `  with  ` sudo mv betty /bin/ ` 
You can now type   ` betty <filename> `   to run the Betty linter!
### Manual QA Review
It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.
## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body In which category belongs the C programming language?
 Quiz question Answers * Interpreted language

* Compiled language

 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body What is the common extension for a C source file?
 Quiz question Answers * .txt

* .c

* .cpp

* .py

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body What is the common extension for a C header file?
 Quiz question Answers * .header

* .hpp

* .h

* .ch

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body Which command can be used to compile a C source file?
 Quiz question Answers * c-compiler

* gcc

* bash

 Quiz question Tips #### 
        
        Question #4
    
 Quiz question Body Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?
 Quiz question Answers *  ` /* Comment */
 ` 
*  ` // Comment
 ` 
*  ` /*
Comment
*/
 ` 
*  ` /*
 * Comment
 */
 ` 
*  ` # Comment
 ` 
*  ` /* Comment /* nested */ */
 ` 
 Quiz question Tips #### 
        
        Question #5
    
 Quiz question Body What are the different steps to form an executable file from C source code
 Quiz question Answers * Interpretation, compilation and assembly

* Preprocessing, compilation, assembly, and linking

* Interpretation, assembly and compilation

* Compilation and linking

* Preprocessing and compilation

 Quiz question Tips ## Tasks
### 0. Preprocessor
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a script that runs a C file through the preprocessor and save the result into another file.
* The C file name will be saved in the variable  ` $CFILE ` 
* The output should be saved in the file  ` c ` 
```bash
julien@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 0-preprocessor ` 
 Self-paced manual review  Panel footer - Controls 
### 1. Compiler
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a script that compiles a C file but does not link.
* The C file name will be saved in the variable  ` $CFILE ` 
* The output file should be named the same as the C file, but with the extension  ` .o `  instead of  ` .c ` .* Example: if the C file is  ` main.c ` , the output file should be  ` main.o ` 

```bash
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 1-compiler ` 
 Self-paced manual review  Panel footer - Controls 
### 2. Assembler
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a script that generates the assembly code of a C code and save it in an output file.
* The C file name will be saved in the variable  ` $CFILE ` 
* The output file should be named the same as the C file, but with the extension  ` .s `  instead of  ` .c ` .* Example: if the C file is  ` main.c ` , the output file should be  ` main.s ` 

```bash
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./2-assembler
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 2-assembler ` 
 Self-paced manual review  Panel footer - Controls 
### 3. Name
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a script that compiles a C file and creates an executable named   ` cisfun `  .
* The C file name will be saved in the variable  ` $CFILE ` 
```bash
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./3-name 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 3-name ` 
 Self-paced manual review  Panel footer - Controls 
### 4. Hello, puts
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a C program that prints exactly   ` "Programming is like building a multilingual puzzle `  , followed by a new line.
* Use the function  ` puts ` 
* You are not allowed to use  ` printf ` 
* Your program should end with the value  ` 0 ` 
```bash
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 4-puts.c ` 
 Self-paced manual review  Panel footer - Controls 
### 5. Hello, printf
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a C program that prints exactly   ` with proper grammar, but the outcome is a piece of art, `  , followed by a new line.
* Use the function  ` printf ` 
* You are not allowed to use the function  ` puts ` 
* Your program should return  ` 0 ` 
* Your program should compile without warning when using the  ` -Wall `  ` gcc `  option
```bash
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
julien@ubuntu:~/c/0x00$ ./a.out 
with proper grammar, but the outcome is a piece of art,
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 5-printf.c ` 
 Self-paced manual review  Panel footer - Controls 
### 6. Size is not grandeur, and territory does not make a nation
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a C program that prints the size of various types on the computer it is compiled and run on.
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return  ` 0 ` 
* You might have to install the package   ` libc6-dev-i386 `  on your Linux (Vagrant) to test the  ` -m32 `  ` gcc `  option
```bash
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 6-size.c ` 
 Self-paced manual review  Panel footer - Controls 
### 7. What happens when you type gcc main.c
          mandatory         Progress vs Score           Score: 0.00% (Checks completed: 0.00%)         Task Body Write a blog post that explains all the steps of compilation. Use command lines and examples to illustrate.
* Use  ` gcc `  as the compiler
* Have at least one picture, at the top of the blog post
* Publish your blog post on Medium or LinkedIn
* Share your blog post at least on LinkedIn
* Please, remember that these blogs must be written in English to further your technical ability in a variety of settings
When done, please add all urls below (blog post, LinkedIn post, etc.)
 Task URLs #### Add URLs here:
                Save               Github information  Self-paced manual review  Panel footer - Controls 
### 8. Intel
          #advanced         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable  ` $CFILE ` .
* The output file should be named the same as the C file, but with the extension  ` .s `  instead of  ` .c ` .* Example: if the C file is  ` main.c ` , the output file should be  ` main.s ` 

```bash
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./100-intel 
julien@ubuntu:~/c/0x00$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 100-intel ` 
 Self-paced manual review  Panel footer - Controls 
### 9. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
          #advanced         Progress vs Score           Score: 0.00% (Checks completed: 0.00%)         Task Body Write a C program that prints exactly   ` and that piece of art is useful" - Dora Korpar, 2015-10-19 `  , followed by a new line, to the standard error.
* You are not allowed to use any functions listed in the NAME section of the man (3)  ` printf `  or man (3)  ` puts ` 
* Your program should return 1
* Your program should compile without any warnings when using the  ` -Wall `  ` gcc `  option
```bash
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
julien@ubuntu:~/c/0x00$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x00-hello_world ` 
* File:  ` 101-quote.c ` 
 Self-paced manual review  Panel footer - Controls 
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