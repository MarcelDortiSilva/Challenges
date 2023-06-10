//Guess Number program;
// The program will generate a random number from 1 to 20;
// User is asked to guess the number
// The program will tell the user if the Guess is too high or too low;
// The player wins if he can guess the number with 5 attempts at the most
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
srand(time(NULL)); // Generates random number from the UTC time clock array seed.

int rn = (rand() % 21); // defines the random number mod 20, to limit the random numbers to be from 0 - 20;
int tries = 5, guess; // random number, number of tries, guess try

for (tries=5; tries != 0; tries--)

{

//printf ("The random number is %d\n",rn);
if (tries==1)
printf ("The Guess number, you have %d attempt: (0-20)\n", tries); //for one condition no { } is necessary
else
printf ("Guess the number, you have %d attempts: (0-20)\n", tries); // if statement, because of the plural of the languages, if it was in  Chinese that would be easier.
scanf("%d", &guess);


if (guess > 20 || guess <0)
    {
        printf ("Not a valid range\n");
    }
else if (guess == rn)
     {
      printf ("You won, the number is %d, with %d tries remaining\n",rn,tries);
      return 0;
      }
else if (abs(rn - guess) > 10 && rn > guess)
        {
        printf ("You are far, and my number is higher than your guess\n");
        }
else if (abs(rn - guess) > 10 && rn < guess)
        {
        printf ("You are far, and my number is lower than your guess\n");
        }
else if (abs(rn - guess) < 10 && rn > guess)
        {
        printf ("You are closer, and my number is higher than your guess\n");
        }
else if (abs(rn - guess) < 10 && rn < guess)
        {
        printf ("You are closer, and my number is lower than your guess\n");
        }


}

if (tries ==0)
{
 printf ("NO MORE TRIES LEFT, YOU LOOOSE - GAME OVER\n");
 printf ("The number was %d\n", rn);
}


return 0;
}

