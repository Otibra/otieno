#include <stdio.h>

int main()
{
    int n = 0;
    int fact = 1;

    printf("enter number: ");
    scanf("%d",&n);

    while (n >= 1)
    {
      fact = n * fact;
      n--;  /* code */
    }
    printf("fact %d\n",fact);
    return 0;
    
}