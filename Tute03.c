/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  // declaring variable
  int i , number , total = 0;

  // taking input from the user 
  printf("Enter number : ");
  scanf("%d", &number );

 // calculate total 
  for( i = 1 ; i <= number ; i++ ){
    total += i ;
  }

  // print total to the user 
  printf("\nTotal is : %d", total );
  
  return 0;
}

