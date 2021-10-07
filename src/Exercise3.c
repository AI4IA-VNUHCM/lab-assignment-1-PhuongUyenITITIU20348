/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool isPrime(int n)
{
    
    if (n < 2){
        return false;
    }

    
    if (n == 2){
        return true;
    }

    
    if (n % 2 == 0){
        return false;
    }

    
    for (int i = 3; i < (n - 1); i += 2){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[]){
    printf("Input: %s\n", argv[1]);
    printf("Output: ");
    int n = atoi(argv[1]);

    for(int i = 2; i <= n; i ++){
        if(isPrime(i)){
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
