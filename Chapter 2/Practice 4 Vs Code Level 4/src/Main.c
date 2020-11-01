#include <math.h>// sqrt(), pow()
#include <stdio.h>// printf(), scanf()
#include <stdlib.h> // system()

int main()
{
   system("clear");
   double a, b, c, x1, x2;

   printf("\t\t\t\t\t\tProgram Rumus ABC\n\n");
   printf("Masukkan nilai a\t: ");
   scanf("%lf", &a);
   printf("Masukkan nilai b\t: ");
   scanf("%lf", &b);
   printf("Masukkan nilai c\t: ");
   scanf("%lf", &c);

   // x^2-5x+6
   // Diket : a = 1, b = -5, c = 6
   // x^2-3x-10
   // Diket : a = 1, b = -3, c = -10
   // x^2+5x-36
   // Diket : a = 1, b = 5, c = -36

   x1 = (-(b) + sqrt(pow(b, 2) - (4 * a * c))) / 2;
   x2 = (-(b) - sqrt(pow(b, 2) - (4 * a * c))) / 2;
   
   if ((b<0)&&(c>0))
   {
      printf("Jadi, x1 pada x^2%dx+%d adalah %d\n", (int)b, (int)c, (int)x1);
      printf("Jadi, x1 pada x^2%dx+%d adalah %d\n", (int)b, (int)c, (int)x2);
   }
   else if((b<0)&&(c<0))
   {
      printf("Jadi, x1 pada x^2%dx%d adalah %d\n", (int)b, (int)c, (int)x1);
      printf("Jadi, x1 pada x^2%dx%d adalah %d\n", (int)b, (int)c, (int)x2);
   }
   else if((b>0)&&(c<0))
   {
      printf("Jadi, x1 pada x^2+%dx%d adalah %d\n", (int)b, (int)c, (int)x1);
      printf("Jadi, x1 pada x^2+%dx%d adalah %d\n", (int)b, (int)c, (int)x2);
   }
   
   return 0;
}