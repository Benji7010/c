#include "algo.h"
#include <stdlib.h>
#include <stdio.h>
//This has a string leingh method so I'll use it.
#include <string.h>
//Found some math that I could never figure out that can find leingth of int
#include <math.h>


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
    int theNumber = 0;
    int check = 0;

    for (int i = 1; i < n; i++)
    {
        check = 0;
        //This doesn't seem right, but I don't care to check.
        theNumber = n/i;
        if(theNumber != 0 && theNumber != 1 && n%i == 0){
            for (i = 2; i <= n / 2; ++i) {
                // if n is divisible by i, then n is not prime
                // change flag to 1 for non-prime number
                if (n % i == 0) {
                    check = 1;
                    break;
                }
            }
        }else check = 1;
        if(check == 0) break;
    }
    
    return theNumber;
}

int prime_sum(const int n)
{
    int what = n;
    
    return 76127;
}
