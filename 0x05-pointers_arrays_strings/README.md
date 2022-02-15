# 0x05. C - Pointers, arrays and strings
## Details
      By Julien Barbier          Weight: 1              Project over - took place from 10-11-2021 to 10-12-2021          - you're done with 100% of tasks.              An auto review will be launched at the deadline      #### In a nutshell…
* Auto QA review:          68.55/71 mandatory            &            0.0/24 optional      
* Altogether:         96.55%* Mandatory: 96.55%
* Optional: 0.0%
*               Calculation:                   96.55%                    + (96.55% * 0.0%)               == 96.55%

## Concepts
For this project, students are expected to look at these concepts:
* [Pointers and arrays](https://intranet.hbtn.io/concepts/60) 

* [Data Structures](https://intranet.hbtn.io/concepts/120) 

 ![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG) 

## Resources
Read or watch :
* [C - Arrays](https://intranet.hbtn.io/rltoken/JDzn5TfvFN41WKKvjOfvTg) 

* [C - Pointers](https://intranet.hbtn.io/rltoken/9CA1cUi3AxHOszdncsKC7g) 

* [C - Strings](https://intranet.hbtn.io/rltoken/VBdJIrssmpg5YLOfoGTVnA) 

* [Memory Layout](https://intranet.hbtn.io/rltoken/XCdri62uArXHsZev8zHhnA) 

## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/njG9BD_e7rtF-j51ESBzng) 
 ,  without the help of Google :
### General
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables
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
* You are not allowed to use the standard library. Any use of functions like  ` printf ` ,  ` puts ` , etc… is forbidden
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c) 

* You don’t have to push  ` _putchar.c ` , we will use our file. If you do it won’t be taken into account
* In the following examples, the  ` main.c `  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  ` main.c `  files at compilation. Our  ` main.c `  files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function  ` _putchar `  should be included in your header file called  ` main.h ` 
* Don’t forget to push your header file
## More Info
You do not need to learn about pointers to functions, pointers to pointers, multidimensional arrays, arrays of structures,   ` malloc `   and   ` free `   - yet.
## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body What is the size of a pointer to a   ` char `   (on a 64-bit architecture)
 Quiz question Answers * 1 byte

* 2 bytes

* 4 bytes

* 8 bytes

 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body What is the size of a pointer to an   ` int `   (on a 64-bit architecture)
 Quiz question Answers * 1 byte

* 2 bytes

* 4 bytes

* 8 bytes

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body If we have a variable called   ` var `   of type   ` int `  , how can we get its address in memory?
 Quiz question Answers * *var

* *(var)

* &var

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body What is the identifier to print an address with   ` printf `  ?
 Quiz question Answers * %a

* %d

* %p

* %x

 Quiz question Tips #### 
        
        Question #4
    
 Quiz question Body The process of getting the value that is stored in the memory location pointed to by a pointer is called:
 Quiz question Answers * Pointing

* Accessing

* Dereferencing

* Casting

 Quiz question Tips #### 
        
        Question #5
    
 Quiz question Body Is it possible to declare a pointer to a pointer?
 Quiz question Answers * Yes

* No

* It depends on the type the pointer is pointing to

 Quiz question Tips #### 
        
        Question #6
    
 Quiz question Body What happens when one tries to access an illegal memory location?
 Quiz question Answers * The operation is ignored

* Segmentation fault

* The computer shuts down

* There’s a chance for the computer to catch fire, and sometimes even explode

 Quiz question Tips #### 
        
        Question #7
    
 Quiz question Body What is the value of   ` n `   after the following code is executed?
 ` int n = 98;
int *p = &n;
 `  Quiz question Answers * 0

* 98

* 99

* 402

 Quiz question Tips #### 
        
        Question #8
    
 Quiz question Body What is the value of   ` n `   after the following code is executed?
 ` int n = 98;
int *p = &n;

p = 402;
 `  Quiz question Answers * 0

* 98

* 99

* 402

 Quiz question Tips #### 
        
        Question #9
    
 Quiz question Body What is the value of   ` n `   after the following code is executed?
 ` int n = 98;
int *p = &n;

*p = 402;
 `  Quiz question Answers * 0

* 98

* 99

* 402

 Quiz question Tips #### 
        
        Question #10
    
 Quiz question Body What is the value of   ` n `   after the following code is executed?
 ` int n = 98;
int *p = &n;

*p++;
 `  Quiz question Answers * 0

* 98

* 99

* 402

 Quiz question Tips #### 
        
        Question #11
    
 Quiz question Body We declare the following variable
 ` int arr[5];
 ` What is the size in memory of the variable   ` arr `  ?
 Quiz question Answers * 4 bytes

* 5 bytes

* 8 bytes

* 10 bytes

* 32 bytes

* 20 bytes

 Quiz question Tips #### 
        
        Question #12
    
 Quiz question Body We declare the following variable
 ` int arr[5];
 ` What is the equivalent of typing   ` arr[2] `  ?
 Quiz question Answers * arr + 2

* *arr + 2

* *(arr + 2)

 Quiz question Tips ## Tasks
### 0. 98 Battery st.
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that takes a pointer to an   ` int `   as parameter and updates the value it points to to   ` 98 `  .
* Prototype:  ` void reset_to_98(int *n); ` 
```bash
julien@ubuntu:~/0x05$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 0-reset_to_98.c ` 
 Self-paced manual review  Panel footer - Controls 
### 1. Don't swap horses in crossing a stream
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that swaps the values of two integers.
* Prototype:  ` void swap_int(int *a, int *b); ` 
```bash
julien@ubuntu:~/0x05$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 1-swap.c ` 
 Self-paced manual review  Panel footer - Controls 
### 2. This report, by its very length, defends itself against the risk of being read
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that returns the length of a string.
* Prototype:  ` int _strlen(char *s); ` 
FYI: The standard library provides a similar function:   ` strlen `  . Run   ` man strlen `   to learn more.
```bash
julien@ubuntu:~/0x05$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
16
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 2-strlen.c ` 
 Self-paced manual review  Panel footer - Controls 
### 3. I do not fear computers. I fear the lack of them
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that prints a string, followed by a new line, to   ` stdout `  .
* Prototype:  ` void _puts(char *str); ` 
FYI: The standard library provides a similar function:   ` puts `  . Run   ` man puts `   to learn more.
```bash
julien@ubuntu:~/0x05$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$ 


```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 3-puts.c ` 
 Self-paced manual review  Panel footer - Controls 
### 4. I can only go one way. I've not got a reverse gear
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that prints a string, in reverse, followed by a new line.
* Prototype:  ` void print_rev(char *s); ` 
```bash
julien@ubuntu:~/0x05$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 4-print_rev.c ` 
 Self-paced manual review  Panel footer - Controls 
### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
          mandatory         Progress vs Score           Score: 65.00% (Checks completed: 100.00%)         Task Body Write a function that reverses a string.  
* Prototype:  ` void rev_string(char *s); ` 
```bash
julien@ubuntu:~/0x05$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string 
My School
loohcS yM
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 5-rev_string.c ` 
 Self-paced manual review  Panel footer - Controls 
### 6. Half the lies they tell about me aren't true
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that prints every other character of a string, starting with the first character, followed by a new line.
* Prototype:  ` void puts2(char *str); ` 
```bash
julien@ubuntu:~/0x05$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2 
02468
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 6-puts2.c ` 
 Self-paced manual review  Panel footer - Controls 
### 7. Winning is only half of it. Having fun is the other half
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that prints half of a string, followed by a new line.
* Prototype:  ` void puts_half(char *str); ` 
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last  ` n `  characters of the string, where  ` n = (length_of_the_string - 1) / 2 ` 
```bash
julien@ubuntu:~/0x05$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 7-puts_half.c ` 
 Self-paced manual review  Panel footer - Controls 
### 8. Arrays are not pointers
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that prints   ` n `   elements of an array of integers, followed by a new line.
* Prototype:  ` void print_array(int *a, int n); ` 
* where  ` n `  is the number of elements of the array to be printed
* Numbers must be separated by comma, followed by a space
* The numbers should be displayed in the same order as they are stored in the array
* You are allowed to use  ` printf ` 
```bash
julien@ubuntu:~/0x05$ cat 8-main.c
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 8-print_array.c ` 
 Self-paced manual review  Panel footer - Controls 
### 9. strcpy
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body * Prototype:  ` char *_strcpy(char *dest, char *src); ` 
Write a function that copies the string pointed to by   ` src `  , including the terminating null byte (  ` \0 `  ), to the buffer pointed to by   ` dest `  .
* Return value: the pointer to  ` dest ` 
FYI: The standard library provides a similar function:   ` strcpy `  . Run   ` man strcpy `   to learn more.
```bash
julien@ubuntu:~/0x05$ cat 9-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 9-strcpy.c ` 
 Self-paced manual review  Panel footer - Controls 
### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
          #advanced         Progress vs Score           Score: 0.00% (Checks completed: 0.00%)         Task Body Write a function that convert a string to an integer.
* Prototype:  ` int _atoi(char *s); ` 
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the  ` - `  and  ` + `  signs before the number
* If there are no numbers in the string, the function must return  ` 0 ` 
* You are not allowed to use  ` long ` 
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* We will use the  ` -fsanitize=signed-integer-overflow `  gcc flag to compile your code.
FYI: The standard library provides a similar function:   ` atoi `  . Run   ` man atoi `   to learn more.
```bash
julien@ubuntu:~/0x05$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 100-atoi.c ` 
 Self-paced manual review  Panel footer - Controls 
### 11. Don't hate the hacker, hate the code
          #advanced         Progress vs Score           Score: 0.00% (Checks completed: 0.00%)         Task Body Create a program that generates random valid passwords for the program  [101-crackme](https://github.com/holbertonschool/0x04.c) 
 .
* You are allowed to use the standard library
* You don’t have to pass the  ` betty-style `  tests (you still need to pass the  ` betty-doc `  tests)
* man  ` srand ` ,  ` rand ` ,  ` time ` 
*  ` gdb `  and  ` objdump `  can help
```bash
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x05$ ./101-crackme "`./101-keygen`"
Tada! Congrats
julien@ubuntu:~/0x05$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x05-pointers_arrays_strings ` 
* File:  ` 101-keygen.c ` 
 Self-paced manual review  Panel footer - Controls 
×#### Recommended Sandboxes
[Running only]() 
### 2 images(1/5 Sandboxes spawned)
### Ubuntu 16.04
Basic Ubuntu 16.04 with vim, emacs, git and curl
[Run]() 
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