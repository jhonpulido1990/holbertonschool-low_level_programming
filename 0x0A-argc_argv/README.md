# 0x0A. C - argc, argv
## Details
      By Julien Barbier          Weight: 1              Project over - took place from 10-22-2021 to 10-23-2021          - you're done with 80% of tasks.              An auto review will be launched at the deadline      #### In a nutshell…
* Auto QA review:          29.0/37 mandatory            &            3.25/9 optional      
* Altogether:         106.68%* Mandatory: 78.38%
* Optional: 36.11%
*               Calculation:                   78.38%                    + (78.38% * 36.11%)               == 106.68%

## Resources
Read or watch :
* [Arguments to main](https://intranet.hbtn.io/rltoken/9qSBELMTQW1ldB0yGS6VZQ) 

* [argc and argv](https://intranet.hbtn.io/rltoken/WL2UmZcO4fWhIgW-a1vePg) 

* [What does argc and argv mean?](https://intranet.hbtn.io/rltoken/hWES8SJFzZJeWm0bBC5v8A) 

* [how to compile with unused variables](https://intranet.hbtn.io/rltoken/k7iIVMXLkWDm2D2ATHb6xw) 

## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/LlxSqMZX9I3fvnUqZa9osg) 
 ,  without the help of Google :
### General
* How to use arguments passed to your program
* What are two prototypes of  ` main `  that you know of, and in which case do you use one or the other
* How to use  ` __attribute__((unused)) `  or  ` (void) `  to compile functions with unused variables or parameters
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
* The prototypes of all your functions and the prototype of the function  ` _putchar `  should be included in your header file called  ` main.h ` 
* Don’t forget to push your header file
* You are allowed to use the standard library
## Quiz questions
Show
#### 
        
        Question #0
    
 Quiz question Body What is   ` argc `  ?
 Quiz question Answers * The number of command line arguments

* A flag set to 1 when command line arguments are present

* The size of the   ` argv `   array

* The length of the first command line argument

 Quiz question Tips #### 
        
        Question #1
    
 Quiz question Body What is   ` argv `  ?
 Quiz question Answers * An array containing the program compilation flags

* An array containing the program command line arguments

* An array of size   ` argc ` 

 Quiz question Tips #### 
        
        Question #2
    
 Quiz question Body What is   ` argv[0] ` 
 Quiz question Answers * NULL

* It does not always exist

* The first command line argument

* The program name

 Quiz question Tips #### 
        
        Question #3
    
 Quiz question Body What is   ` argv[argc] `  ?
 Quiz question Answers * NULL

* It does not always exist

* The first command line argument

* The program name

* The last command line argument

 Quiz question Tips #### 
        
        Question #4
    
 Quiz question Body In the following command, what is   ` argv[2] `  ?
 ` $ ./argv My School is fun
 `  Quiz question Answers * NULL

* ./argv

* My

* School

* My School

* is

* fun

* is fun

* My School is fun

 Quiz question Tips #### 
        
        Question #5
    
 Quiz question Body In the following command, what is   ` argv[2] `  ?
 ` $ ./argv "My School" "is fun"
 `  Quiz question Answers * NULL

* ./argv

* My

* School

* My School

* is

* fun

* is fun

* My School is fun

 Quiz question Tips #### 
        
        Question #6
    
 Quiz question Body In the following command, what is   ` argv[2] `  ?
 ` $ ./argv "My School is fun"
 `  Quiz question Answers * NULL

* ./argv

* My

* School

* My School

* is

* fun

* is fun

* My School is fun

 Quiz question Tips ## Tasks
### 0. It ain't what they call you, it's what you answer to
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a program that prints its name, followed by a new line.
* If you rename the program, it will print the new name, without having to compile it again
* You should not remove the path before the name of the program
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0A-argc_argv ` 
* File:  ` 0-whatsmyname.c ` 
 Self-paced manual review  Panel footer - Controls 
### 1. Silence is argument carried out by other means
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a program that prints the number of arguments passed into it.
* Your program should print a number, followed by a new line
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0A-argc_argv ` 
* File:  ` 1-args.c ` 
 Self-paced manual review  Panel footer - Controls 
### 2. The best argument against democracy is a five-minute conversation with the average voter
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a program that prints all arguments it receives.
* All arguments should be printed, including the first one
* Only print one argument per line, ending with a new line
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0A-argc_argv ` 
* File:  ` 2-args.c ` 
 Self-paced manual review  Panel footer - Controls 
### 3. Neither irony nor sarcasm is argument
          mandatory         Progress vs Score           Score: 100.00% (Checks completed: 100.00%)         Task Body Write a program that multiplies two numbers.
* Your program should print the result of the multiplication, followed by a new line
* You can assume that the two numbers and result of the multiplication can be stored in an integer
* If the program does not receive two arguments, your program should print  ` Error ` , followed by a new line, and return  ` 1 ` 
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0A-argc_argv ` 
* File:  ` 3-mul.c ` 
 Self-paced manual review  Panel footer - Controls 
### 4. To infinity and beyond
          mandatory         Progress vs Score           Score: 0.00% (Checks completed: 0.00%)         Task Body Write a program that adds positive numbers.
* Print the result, followed by a new line
* If no number is passed to the program, print  ` 0 ` , followed by a new line
* If one of the number contains symbols that are not digits, print  ` Error ` , followed by a new line, and return  ` 1 ` 
* You can assume that numbers and the addition of all the numbers can be stored in an  ` int ` 
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0A-argc_argv ` 
* File:  ` 4-add.c ` 
 Self-paced manual review  Panel footer - Controls 
### 5. Minimal Number of Coins for Change
          #advanced         Progress vs Score           Score: 36.11% (Checks completed: 55.56%)         Task Body Write a program that prints the minimum number of coins to make change for an amount of money.
* Usage:  ` ./change cents ` 
* where  ` cents `  is the amount of cents you need to give back
* if the number of arguments passed to your program is not exactly  ` 1 ` , print  ` Error ` , followed by a new line, and return  ` 1 ` 
* you should use  ` atoi `  to parse the parameter passed to your program
* If the number passed as the argument is negative, print  ` 0 ` , followed by a new line
* You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
```bash
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change 
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
julien@ubuntu:~/0x0A. argc, argv$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x0A-argc_argv ` 
* File:  ` 100-change.c ` 
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