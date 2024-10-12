#include <stdio.h>
#include <math.h>

int main()
{
  printf("Enter the number: \n");
  int num;
  scanf("%d", &num);
  if (num <= 1)
  {
    printf("The number is invalid i.e <=1");
  }
  else if (num == 2)
  {
    printf("The given number is prime ");
  }
  else
  {
    int temp = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
      if (num % i == 0)
      {
        temp = 1;
        break;
      }
    }
    if (temp)
    {
      printf("The given number is not a prime number");
    }
    else
    {
      printf("The given number is a prime number ");
    }
  }

  return 0;
}