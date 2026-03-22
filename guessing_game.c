#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
int n, p, tries, d, a;
p = 0;
tries = 0;
a = 1;

while (a == 1)
{
 p = 0;
 tries = 0;
 d = 0;
 n = 0;


int escolherDificuldade();
printf("type the number. Easy = 1, medium = 2, hard = 3: \n");
scanf("%d", &d);

int parametrosdojogo();
if (d == 1)
{
srand(time(NULL));
n = rand () % 50 + 1;
}
else if (d == 2)
{
srand(time(NULL));
n = rand () % 100 + 1;
}
else if (d == 3)
{
  srand(time(NULL));
n = rand () % 500 + 1;
}

int jogo();
while (p != n)
{
 if (d == 3 && tries == 10)
 {
  printf("you lost!");
   printf("\nplay again? yes = 1, no = 0\n");
   scanf("%d", &a);
   if (a == 0)
   {
    return 0;
   }
    else
     {
      break;
     }
 }
 else if (d == 2 && tries == 5)
 {
 printf("you lost!");
  printf("\nplay again? yes = 1, no = 0\n");
   scanf("%d", &a);
     if (a == 0)
   {
    return 0;
   }
    else
     {
      break;
     }
 }
 else if (d == 1 && tries == 5)
 {
  printf("you lost!");
  printf("\nplay again? yes = 1, no = 0\n");
   scanf("%d", &a);
    if (a == 0)
   {
    return 0;
   }
    else
     {
      break;
     }
 }
  printf("write a number: \n");
  scanf("%d", &p);

  if (p < n)
 {
   printf("the number is higher\n");
   tries = tries + 1;
 }
 else if (p > n)
 {
   printf("the number is lower\n");
    tries = tries + 1;

 }
 else
 {
  printf("the number is correct!\n");
  tries = tries + 1;
   printf("you have tried: %d times\n", tries);
   printf("\nplay again? yes = 1, no = 0\n");
   scanf("%d", &a);
     if (a == 0)
   {
    return 0;
   }
    else
     {
      break;
     }
 }

 }
}
  
}
