#include <stdio.h>
#include <stdlib.h>
int main() 
{
	 FILE *even_file = fopen("even.txt", "w");
     FILE *odd_file = fopen("odd.txt", "w");
 
     int i;
    for (i = 50; i <= 70; i++)
	{ 
	   if (i % 2 == 0)
	   {
           fprintf(even_file, "%d\n", i);
       }
   }

    for (i = 50; i <= 70; i++) 
	{
        if (i % 2 != 0) 
		{
        fprintf(odd_file, "%d\n", i);
        }
    }
  
  fclose(even_file);
  fclose(odd_file);
  return 0;
}
