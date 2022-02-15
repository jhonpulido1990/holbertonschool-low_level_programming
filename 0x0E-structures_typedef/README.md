# 0x0E. C - Structures, typedef
## Details
      By Julien Barbier          Weight: 1              Project over - took place from 11-01-2021 to 11-02-2021          - you're done with 100% of tasks.              An auto review will be launched at the deadline      #### In a nutshell…
* Auto QA review:          44.0/44 mandatory      
* Altogether:         100.0%* Mandatory: 100.0%
* Optional: no optional tasks

 ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/50af78a28a081e809856d4cdbde2d7ca9d4aa93d.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220215%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220215T145930Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=d8f9f51e59ad3446510f614818eb79d0f4e4c2810528507cc8b58bc8d58b95a3) 

## Resources
Read or watch :
* [0x0d. Structures.pdf](https://intranet.hbtn.io/rltoken/Rc1JAo6IS9HkELfLUylh2g) 

* [struct (C programming language)](https://intranet.hbtn.io/rltoken/sF_gQY2e9CP95XbgWQkduA) 

* [Documentation: structures](https://intranet.hbtn.io/rltoken/7VySR2oMyxk7VMR8LLOvZA) 

* [0x0d. Typedef and structures.pdf](https://intranet.hbtn.io/rltoken/kef9P9qRh_co4dxwHU8QGA) 

* [typedef](https://intranet.hbtn.io/rltoken/-vbMNPFrIA5PcVs4RiWr4g) 

* Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
* [The Lost Art of C Structure Packing](https://intranet.hbtn.io/rltoken/92gDeb3TtzgLDpzo9DXfZg) 
 (Advanced - not mandatory)
## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/SJC6PvFo2vSFZW0M7u-caw) 
 ,  without the help of Google :
### General
* What are structures, when, why and how to use them
* How to use  ` typedef ` 
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
* The only C standard library functions allowed are  ` printf ` ,  ` malloc ` ,  ` free `  and  ` exit ` . 
* In the following examples, the  ` main.c `  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  ` main.c `  files at compilation. Our  ` main.c `  files might be different from the one shown in the examples
* Don’t forget to push your header file
* All your header files should be include guarded
## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body You should write documentation for all the structures you create
 Quiz question Answers * True

* I’ll do it 5 minutes before the deadline when I try Betty on my header file

* As soon as I write my structure.

 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body The general syntax for a struct declaration in C is:
```bash
struct tag_name {
   type member1;
   type member2;
   /* declare as many members as desired, but the entire structure size must be known to the compiler. */
};

```
 Quiz question Answers * True

* False

* Maybe

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body Those two codes do the same thing:
 ` typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = {1, 2};
 ` ```bash
typedef struct point point;
struct point {
   int    x;
   int    y;
};
point p = { .y = 2, .x = 1 };

```
 Quiz question Answers * True

* False: the second does not compile

* False: the members of the structures will not have the same values

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body Given this code:
```bash
struct point {
   int x;
   int y;
};
struct point my_point = { 3, 7 };
struct point *p = &my_point;

```
To set the member y of my variable my_point to 98, I can do (select all valid answers):
 Quiz question Answers * my_point.y = 98;

* my_point->y = 98;

* p.y = 98;

* (*p).y = 98;

* p->y = 98;

 Quiz question Tips ## Tasks
### 0. Poppy
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body  ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/3b534d73d79949ef8b7535d462014518256953f2.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220215%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220215T145930Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=cec7a9b73730c5ddefc4dc8694e9eb5e8b3d4344d0e4e329d5831b8d59d405f2) 

Define a new type   ` struct dog `   with the following elements:
*  ` name ` , type =  ` char * ` 
*  ` age ` , type =  ` float ` 
*  ` owner ` , type =  ` char * ` 
```bash
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0E-structures_typedef ` 
* File:  ` dog.h ` 
 Self-paced manual review  Panel footer - Controls 
### 1. A dog is the only thing on earth that loves you more than you love yourself
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a function that initialize a variable of type   ` struct dog ` 
* Prototype:  ` void init_dog(struct dog *d, char *name, float age, char *owner); ` 
```bash
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0E-structures_typedef ` 
* File:  ` 1-init_dog.c ` 
 Self-paced manual review  Panel footer - Controls 
### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body  ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220215%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220215T145930Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=735f0ea74f6e95accf0983782d38eb3ccc5f6230e34d2feb2c0cfc78e2ba2c3f) 

Write a function that prints a   ` struct dog ` 
* Prototype:  ` void print_dog(struct dog *d); ` 
* Format: see example bellow
* You are allowed to use the standard library
* If an element of  ` d `  is  ` NULL ` , print  ` (nil) `  instead of this element. (if  ` name `  is  ` NULL ` , print  ` Name: (nil) ` )
* If  ` d `  is  ` NULL `  print nothing.
```bash
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0E-structures_typedef ` 
* File:  ` 2-print_dog.c ` 
 Self-paced manual review  Panel footer - Controls 
### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body  ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/9ef84b3fd1636992602868e45d3062719326de0e.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220215%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220215T145930Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=cc641ee2bd678f23cb38e5cd7333ff376de3b2ef24ed07f9db4d331657bf995b) 

Define a new type   ` dog_t `   as a new name for the type   ` struct dog `  .
```bash
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0E-structures_typedef ` 
* File:  ` dog.h ` 
 Self-paced manual review  Panel footer - Controls 
### 4. A door is what a dog is perpetually on the wrong side of
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body  ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220215%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220215T145930Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=16c36bd5ba94d01e4b051541806aba84847c7b667c0eb629ef8f5292b08db3d0) 

Write a function that creates a new dog.
* Prototype:  ` dog_t *new_dog(char *name, float age, char *owner); ` 
* You have to store a copy of  ` name `  and  ` owner ` 
* Return  ` NULL `  if the function fails
```bash
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0E-structures_typedef ` 
* File:  ` 4-new_dog.c ` 
 Self-paced manual review  Panel footer - Controls 
### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body  ![](https://holbertonintranet.s3.amazonaws.com/uploads/medias/2021/3/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20220215%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220215T145930Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=390855db59aa2f032046ec69343a211342e421d1f32db5acf7b8ed20359a9efb) 

Write a function that frees dogs.
* Prototype:  ` void free_dog(dog_t *d); ` 
```bash
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0E-structures_typedef ` 
* File:  ` 5-free_dog.c ` 
 Self-paced manual review  Panel footer - Controls 
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