

SE 200: C Programming I Average: 97.48%
C - Preprocessor
Wrapping Up Week 7
Coding Project: C - Preprocessor
Coding Project: C - Preprocessor

    Weight: 75
    Project will start Mar 29, 2026 5:00 PM, must end by Apr 5, 2026 4:59 PM

You made it to the end! Your consistency is fire!


Important Notes

    Follow all style and file organization rules
    Do not use restricted standard functions
    Test all implementations thoroughly before submission

Submission Guidelines

Submit your fully tested, properly styled code via the platform before the deadline. Double-check that each file compiles with the required flags.


Copyright & Plagiarism

You are expected to complete this project independently. Sharing or copying solutions is strictly prohibited and will result in removal from the program.
Project Requirements!

Below are the requirements for this project:

    Allowed editors: vi, vim, emacs
    Compilation: Ubuntu 20.04 LTS using gcc with flags -Wall -Werror -Wextra -pedantic -std=gnu89
    All files must end with a new line
    README.md file required
    Use C - Functions Betty style and follow both betty-style.pl and betty-doc.pl
    No global variables
    Maximum 5 functions per file



Only things left to do are completing the following MCQs and then getting on with the project!

Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Object-like Macro
mandatory


Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

julien@ubuntu:~/0x0B. macro, structures$ cat 0-main.c
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
julien@ubuntu:~/0x0B. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0B. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0B. macro, structures$ 


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0B-preprocessor
    File: 0-object_like_macro.h

1. Pi
mandatory


Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

julien@ubuntu:~/0x0B. macro, structures$ cat 1-main.c
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
julien@ubuntu:~/0x0B. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
julien@ubuntu:~/0x0B. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0B. macro, structures$ 


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0B-preprocessor
    File: 1-pi.h

2. File name
mandatory


Write a program that prints the name of the file it was compiled from, followed by a new line.

    You are allowed to use the standard library

julien@ubuntu:~/0x0B. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0B. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0B. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0B. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0B. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0B. macro, structures$ 


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0B-preprocessor
    File: 2-main.c

3. Function-like macro
mandatory


Write a function-like macro ABS(x) that computes the absolute value of a number x.

julien@ubuntu:~/0x0B. macro, structures$ cat 3-main.c
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
julien@ubuntu:~/0x0B. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0B. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0B. macro, structures$ 


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0B-preprocessor
    File: 3-function_like_macro.h

4. SUM
mandatory


Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

julien@ubuntu:~/0x0B. macro, structures$ cat 4-main.c
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
julien@ubuntu:~/0x0B. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
julien@ubuntu:~/0x0B. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0B. macro, structures$ 


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0B-preprocessor
    File: 4-sum.h

Copyright © 2026 SET, All rights reserved.

