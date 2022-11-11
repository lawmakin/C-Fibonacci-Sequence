/***********************************************************
 * PROGRAM NAME: Fib.c                                     *
 *                                                         *
 * PURPOSE: A program to recursively generate a Fibonacci  *
 * number, fn, at any given point in the suquence.         *
 *                                                         *
 * AUTHOR: coderlaw                                        *
 * DATE: 06/11/2022                                        *
 **********************************************************/

/* Pre-Processor Directives */
#include <stdio.h>

/* Function Prototypes */
void PrintFib(int fn);
int Fib(int fn);

/* Functions */
void main(){
    int fn = 0;

    printf("Which Fibonacci number would you like? "
        "Enter a numerical value > 0: ");
    
    char buffer[100];
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &fn);

    PrintFib(fn);
}

void PrintFib(int fn){
    printf("\nFib(%d) = %d\n\n", fn, Fib(fn));
}

int Fib(int fn){ if (fn < 2){ return fn; }

    return (Fib(fn - 1) + Fib(fn - 2));
}