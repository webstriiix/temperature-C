#include <stdio.h>

/* 
  Print Fahrenheit Celcius Table
 for fahr = 0, 20, ...,200
 for celc= -17,-16, ...,148
*/

int main()
{
  float fahr, celcius;
  int lower, upper, step;

  lower = 0; // lower limit of temperature table
  upper = 300; // upper limir
  step = 20; // step size

  fahr = lower;
  

  printf("===========================\n");
  printf("   Fahrenheit To Celcius   \n");
  printf("===========================\n");

  printf("===========================\n");
  printf("|| Fahrenheit || Celcius ||\n");
  printf("===========================\n");
  while (fahr <= upper) {
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("|| %3.0f      ||  %6.1f   ||\n", fahr,celcius);
    fahr = fahr + step;
  }
  printf("===========================\n");

  
  printf("===========================\n");
  printf("   Celcius To Fahrenheit   \n");
  printf("===========================\n");

  printf("===========================\n");
  printf("|| Celcius || Fahrenheit ||\n");
  printf("===========================\n");
  celcius = lower;
  while (celcius <= upper) {
    fahr = (celcius * 9/5) + 32;
    printf("|| %3.0f      ||  %6.1f   ||\n", celcius,fahr);
    celcius = celcius + step;
  }
  printf("===========================\n");
  return 0;
}
