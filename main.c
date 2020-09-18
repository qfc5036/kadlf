// Author Qiaoxu Cui qfc5036@psu.edu
// Collaborator Zhili Bu zjh5625@psu.edu
// Collaborator: Shufang Huang sbh5655@psu.edu
// Collaborator: Isabel Vera ikv5018@psu.edu
// Section: 8
// Breakout: 11

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n)
{
  if(n<10)
  {
    return n;
  }
  else
  {
    int r=n/10;
    int m=n%10;
    int s=m+digit_sum(r);
    return s;
  }
}

int main (void){
int n = atoi(readline("Enter an int: "));
printf("sum of digits of %d is %d.\n", n, digit_sum(n));
}