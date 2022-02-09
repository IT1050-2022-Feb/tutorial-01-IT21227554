/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int no1, int no2){

  // checking the minimum number and return it 
  if( no1 < no2)
    return no1 ;
  else 
    return no2 ;
}

int maximum(int no1, int no2){

 // checking the maximum number and return it 
  if( no1 > no2)
    return no1 ;
  else 
    return no2 ;
}

int multiply(int no1, int no2){

 // retrurn multiply of two numbers
    return no1 * no2 ;

}