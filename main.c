#include <stdio.h>
//Euclid's Extended Algorithm
int gcdExtended(int a, int b, int* x, int* y); 

// Function to find modulo inverse of a
int modInverse(int a, int m) 
{
int x, y;
int g = gcdExtended(a, m, &x, &y);
if (g != 1)
printf("Inverse doesn't exist");
else { // m is added to handle negative x 
  int res = (x % m + m) % m;
  return res; 
  }
}

int gcdExtended(int a, int b, int* x, int* y)
{
// Base Case
if (a == 0){
  *x = 0, *y = 1;
  return b;
  }
int x1, y1; // To store results of recursive call
int gcd = gcdExtended(b % a, a, &x1, &y1);
// Update x and y using results of recursive call
*x = y1 - (b / a) * x1;
*y = x1;
return gcd;
}

int main () {
 
//Testcode for converting char into ASCII 
/*char str[] = "VIR-19";
char *ptr = str;
while (*ptr != '\0') {
printf("%d\n", *ptr);
ptr++;
} */
  
//a and n are given values for the problem. Refer to Euclid's Extended Algorithm
int a = 347;
int n = 673;
int x = modInverse(a,n); // = 609 forgot what my a value was initially.
 
//ASCII text input string into array
int array[] = { 62, 9, 261, 51, 545, 545, 51 };
//Traverse array
for (int i=0; i < 9; i++){
  array[i] = (array[i]*x) % n ;
  printf("%c", array[i]);
}
  
printf("\n");
}
