/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  // declaring variables for loop and take input
  int i ;
  float mark , total = 0 , avg ;

  // for loop for input marks of 3 subject 
  for( i = 0 ; i < 2 ; i++){
    
    printf("Enter mark %d : ",i+1);
    scanf("%f", &mark);
  
  // calculating total
    total += mark;
  }

  // calculate Average
  avg = total / 2;

  // print average
  printf("\nAverage mark of student %.2f\n", avg);

  return 0;
}

