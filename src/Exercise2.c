/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	int num, min, max;
	float avarage;
	 printf("Enter number:");
	 scanf("%d", &num);
	 min=num;
	 max=num;

	 while (num != 0){
		 if (max<num){
			 max = num;
		 }
		 if (min>num){
			 min=num;
		 }
		  printf("Enter number:");
		scanf ("%d", &num);
	 }
	 printf("Min is %d\n", min);
	 printf("Max is %d\n", max);

	 return 0;
}	 		 	 
