#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
int u=7;
int p=7;
while(u=p){
  float i;
  /// i is amount of money
  printf("Enter your amount of money = ");
  scanf("%f", &i );
  int a = i*100;
  /// a is amount of money in type of kr
  int b = a%25;
  /// b is for 10kr
  int c = b%10;
  /// c is for 5 kr
  int d = c%5;
  /// Now we will calculate how many 25kr , 10kr or 5kr we will use

  int x = (a-b)/25;
  /// x equals amount of 25krs in our money
  int y = ((a-(x*25))-c)/10;
  /// y equals amount of 10krs in our money
  int z = ((a- (x*25)-(y*10))-d)/5;


  printf("There are %d 25krs, %d 10krs and %d 5krs in your money\n",x,y,z);
}
return 0;
}
