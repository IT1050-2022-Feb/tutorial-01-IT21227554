/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  
  // declaring variable 
  int distance ;
  double amount = 0;
 
  // taking input from the user
  printf("Enter the distance the can has travelled : ");
  scanf("%d", &distance );

  // checking if the distance is higher than 30KM and calculating amount to be paid
  if(distance > 30 ){
    amount = 40* (distance - 30);
    distance = distance - (distance - 30);
  }

  amount = amount + (distance * 50);

  // print the amount user has to pay
  printf("Amount to be paid :- %.2lf" , amount);

  return 0;
}
