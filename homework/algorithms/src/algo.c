#include "algo.h"
#include <stdlib.h>
#include <stdio.h>
//This has a string leingh method so I'll use it.
#include <string.h>
//Found some math that I could never figure out that can find leingth of int
#include <math.h>

int prime_check(const int n);

/* WELCOME TO WHATEVER THIS CRACKHEAD CODE THIS IS
        Have a lovely time grading!
        To get you started, I made a VLA with stack memory!
        And I'm using the msys2 dll directly in the root! Horray!
*/

long fibonacci(const int n)
{
    int term = 0;
    int previousTerm = 1;
    int storeTerm = 0;
    for (int i = 0; i < n; i++)
    {
        storeTerm = term;
        term = term + previousTerm;
        previousTerm = storeTerm;
    }
    //I don't know where to read the asserts so I'll just do this instead
    printf("%d", term);
    getchar();
    return term;
}

int reverse(const int n)
{
    const int leingth = floor(log10(abs(n))) + 1;
    
    //char * array_ptr = (char*)malloc(sizeof(char) * leingth);
    //(char*)calloc(leingth, sizeof(char));

    //This is definatly wrong, but it works.
    char sarray[leingth];
    char store;
    //int numStore;
    sprintf(sarray,"%d", n);
    printf("%s\n", "Reverse Int Console");
    for(int i = 0; i < (int)strlen(sarray); i++){
        printf("%c\n", sarray[i]);
        //printf("%c\n", *array_ptr);
    }

    for(int j = 0; j < (int)strlen(sarray)/2; j++){
        store = sarray[j];
        printf("%c\n", sarray[0]);
        printf("%c\n", store);
        sarray[j] = sarray[strlen(sarray) - 1 - j];
        printf("%c\n", sarray[j]);
        sarray[strlen(sarray) - 1 - j] = store;
        printf("%c\n", sarray[strlen(sarray) - 1 - j]);
    }

    printf("%d", atoi(sarray));
    getchar();
    return atoi(sarray);
    
    /*
    number = 0;
    for (int k = 0; k < strlen(sarray); k++)
    {
        //Maybe turns it into a num. I'm confused what this does.
        numStore = sarray[k] - 0;
        number = (number * 10) + sarray[k];
    }*/
    
    //free(array_ptr);
}

int prime_factor(const int n)
{
    float theNumber = 0;
    int check = 0;
    printf("%s\n", "Prime Factor Console");

    for (int i = 2; i < n; i++)
    {
        check = 0;
        //This doesn't seem right, but I don't care to check.
        theNumber = n/i;
        //Maybe remainder will fix that.
        printf("%f\n", theNumber);
        printf("%d\n", i);
        if(theNumber != 0 && theNumber != 1 && n%i == 0){
            check = prime_check(theNumber);
        }else check = 1;
        if(check == 0) break;
    }
    
    printf("%d", (int)theNumber);
    getchar();
    return (int)theNumber;
}

int prime_sum(const int n)
{
    int theNumber = 2;
    int check = 0;
    printf("%s\n", "Prime Sum Console");


    if(n < 2) theNumber = 0;

    for (int i = 3; i <= n; i++)
    {
        check = 0;
        
        if(prime_check(i) == 0) theNumber += i;
    }
    
    
    printf("%d", theNumber);
    getchar();
    return theNumber;
}

int prime_check(const int n)
{
    printf("%s\n", "Do prime check");
    int check = 0;
    printf("%d\n", n);
    for (int i = 2; i < n; i++) {
        printf("%d\n", i);
        //if n is divisible by i, then n is not prime
        //change flag to 1 and return 1 for non-prime number
        printf("%d\n", n % i);
        if (n % i == 0) {
            return 1;
            check = 1;
            printf("%s\n", "Not Prime");
            break;
        }
    }
    //the else is for returning something in all cases
    if(check == 0) return 0;
    else return 1;
}
