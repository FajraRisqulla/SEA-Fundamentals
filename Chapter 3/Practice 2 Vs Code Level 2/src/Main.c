#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
   bool verified = true;

   char secret_code[20] = "Dennis Ritchie";

   while (verified)
   {
      char try_secret[20];
      char decision;
   looping:
      system("clear");
      printf("Clue\t\t: C Founder\n");
      printf("YourAnswer\t: ");
      fgets(try_secret, 20, stdin);
      strtok(try_secret, "\n");
      if (strcmp(try_secret, secret_code) != 0)
      {
         printf("Your Answer is Wrong :(\nDo You Want More ? (Y\\N)");
         decision = getchar();
         while ((getchar()) != '\n');
         if ((decision == 'Y') || (decision == 'y'))
         {
            goto looping;
         }
         else
         {
            break;
         }
      }
      else
      {
         printf("Your Answer is Correct, congratulations :)");
         break;
      }
   }

   return 0;
}
