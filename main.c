#include <stdio.h>

/* 
  Print Fahrenheit Celcius Table
 for fahr = 0, 20, ...,200
 for celc= -17,-16, ...,148
*/

#define LOWER 0 // lower limit of table
#define UPPER 300 // upper limit
#define STEP 20 // step size

int main()
{
  int fahr, celcius; 
  //int lower, upper, step;

  //lower = 0; // lower limit of temperature table
  //upper = 300; // upper limir
  //step = 20; // step size

  //fahr = lower;
  

  printf("===========================\n");
  printf("   Fahrenheit To Celcius   \n");
  printf("===========================\n");

  printf("===========================\n");
  printf("|| Fahrenheit || Celcius ||\n");
  printf("===========================\n");

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("|| %3d    ||     %6.1f  ||\n", fahr, (5.0/9.0)*(fahr-32));
  }

  printf("===========================\n");

  
  printf("===========================\n");
  printf("   Celcius To Fahrenheit   \n");
  printf("===========================\n");

  printf("===========================\n");
  printf("|| Celcius || Fahrenheit ||\n");
  printf("===========================\n");

  for (celcius = LOWER; celcius <= UPPER; celcius = celcius + STEP){
    printf("|| %3d    ||     %6.1f  ||\n", celcius, (celcius * 9.0/5.0) + 32);
  }

  printf("===========================\n");
  return 0;
}
