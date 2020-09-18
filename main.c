//Author: Cole Black-Stallard cdb5655@psu.edu
//Collaborator: NONE / SOLO
//Section: 012R
#include <stdio.h>
#include<readline/readline.h>
#include<math.h>
#include<stdlib.h>

int digit_sum(int n) {
  if ( 0 <= n && n <= 9 )  
    return n;
  else 
    return ( n % 10 ) + digit_sum( n / 10 ); 
} 

int main(void) {
  char *nIN = readline("Enter an int: ");
  int n = atof(nIN);
  int nOUT = digit_sum(n);
  printf("sum of digits of %d is %d.\n", n, nOUT);
 
  return 0;
}