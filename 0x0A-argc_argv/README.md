


SE 200: C Programming I Average: 97.48%
Welcome to Week 7!
C - argc, argv
Prototypes of `main`
Handling Unused Variables
Practical Applications
AI: AI as Your Macro Co-Pilot
AI: Organizing and Documenting AI Software Engineering Projects
Coding Project: C - argc, argv
Coding Project: C - argc, argv

    Weight: 75
    Project will start Mar 29, 2026 5:00 PM, must end by Apr 5, 2026 4:59 PM

Step by step, you’re building serious skills.


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
    No use of printf, puts, etc.
    Use only _putchar for output - _putchar.c
    Do not push _putchar.c
    All prototypes must go in main.h



Let’s check some of that learning in the MCQs below, and then get to the project!

Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. It ain't what they call you, it's what you answer to
mandatory


Write a program that prints its name, followed by a new line.

    If you rename the program, it will print the new name, without having to compile it again
    You should not remove the path before the name of the program

julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0A-argc_argv
    File: 0-whatsmyname.c

1. Silence is argument carried out by other means
mandatory


Write a program that prints the number of arguments passed into it.

    Your program should print a number, followed by a new line

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


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0A-argc_argv
    File: 1-args.c

2. The best argument against democracy is a five-minute conversation with the average voter
mandatory


Write a program that prints all arguments it receives.

    All arguments should be printed, including the first one
    Only print one argument per line, ending with a new line

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


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0A-argc_argv
    File: 2-args.c

3. Neither irony nor sarcasm is argument
mandatory


Write a program that multiplies two numbers.

    Your program should print the result of the multiplication, followed by a new line
    You can assume that the two numbers and result of the multiplication can be stored in an integer
    If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

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


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0A-argc_argv
    File: 3-mul.c

4. To infinity and beyond
mandatory


Write a program that adds positive numbers.

    Print the result, followed by a new line
    If no number is passed to the program, print 0, followed by a new line
    If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
    You can assume that numbers and the addition of all the numbers can be stored in an int

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


Repo:

    GitHub repository: set-low_level_programming
    Directory: 0x0A-argc_argv
    File: 4-add.c

Copyright © 2026 SET, All rights reserved.
