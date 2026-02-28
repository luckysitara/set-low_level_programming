
The following code gives this incorrect output. Which of the following statements about what is causing the error is true?

carrie@ubuntu:/debugging$ cat main.c                               
#include <stdio.h>                                                                                 

/**                                                                                                
 * main - debugging example                                                                        
 * Return: 0                                                                                       
 */                                                                                                
int main(void)                                                                                     
{                                                                                                  
        int i;                                                                                     
        int j;                                                                                     

        for (i = 0; i < 10; i++)                                                                   
        {                                                                                          
                j = 0;                                                                             
                while (j < 10)                                                                     
                {                                                                                  
                        printf("%d", j);                                                           
                }                                                                                  
                printf("\n");                                                                      
        }                                                                                          

        return (0);                                                                                
}                                                                                                  
carrie@ubuntu:/debugging$

carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic main.c                                                                                                  
carrie@ubuntu:/debugging$ ./a.out
0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 <...>
^Ccarrie@ubuntu:/debugging$

    j never increments so it will always be less than 10

    j is always equal to i so the loop will never end

    j never increments so it is always going to print 0
