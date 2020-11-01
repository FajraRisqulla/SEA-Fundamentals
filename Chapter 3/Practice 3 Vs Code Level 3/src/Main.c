#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;

   system("clear");
   printf("Masukkan Jumlah Bintang\t: ");
   scanf("%d", &n);

   for (int i = 0; i <= n; i++)
   {
      for (int j = 0; j < i; j++)
      {
         printf("%c", '*');
      }
      putchar('\n');
   }
   putchar('\n');

   for (int i = 0; i < n; i++)
   {
      if (i % 2 != 0)
      {
         printf("%c", ' ');
      }
      for (int j = 0; j < n; j++)
      {
         printf("%c", '*');
      }
      putchar('\n');
   }
   putchar('\n');

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < i; j++)
      {
         printf("%c", ' ');
      }
      for (int j = 0; j < n; j++)
      {
         printf("%c", '*');
      }
      putchar('\n');
   }

   return 0;
}
