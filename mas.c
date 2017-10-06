#include <stdio.h>
#include <stdlib.h>

int	main()
{
  int  mas_size[1000]= {0};
  int n, i, a, f, diff, k;

  k = 0;
  n = 0;
  i = 0;
  a = 0;
  f = 0;
  diff = 0;
  puts("Write count of value:");
  scanf("%d",&n);
  while (i < n)
  {
    printf("Write number value %d:",i+1);
    scanf("%d", &mas_size[i]);
    a += mas_size[i];
    i++;
    printf("%d\n", a);
  }
  a = a / n;
  printf("Middle value of the array: %d\n", a);
  diff = abs(a - mas_size[0]); 
  while (k <= n)
    {
      if (abs(a - mas_size[k]) < diff)
	{
	  diff = abs(a - mas_size[k]);
	  f = mas_size[k];
	}
      k++;
    }
  printf("Search value: %d\n", f);
  return 0;
  
}
