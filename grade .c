/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    float average;
    char grade;
    printf("Enter average marks:");
    scanf("%f",&average);
    if(average>=90)
    {
        grade='A';
    }
    else
        if(average>=80)
        {
            grade='B';
        }
        else
            if(average>=70)
            {
                grade='C';
            }
            else
            if(average>=60)
            {
                grade='D';
            }
            else
            {
                grade='F';
            }
            printf("grade:%c\n",grade);
            return 0;
            
            }

    
gr
