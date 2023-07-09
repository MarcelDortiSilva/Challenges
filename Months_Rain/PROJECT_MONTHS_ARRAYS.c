//software uses array to store number of years, and then samples by month, in the
//end the average of each year is presented.

#include<stdio.h>

int main ()

{
int yearsnumber=0;
char months [12 ][4] = {"Jan", "Fev", "Mar", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; //declaring months
float rainfall [12][3];
float rainfallavey [3] = {0};

printf ("Enter the number of years for the average:");
scanf ("%d", &yearsnumber);

for (int j = 0; j < yearsnumber; j++)
{
    printf ("Year %i of %i\n", j+1, yearsnumber);
    for (int i=0; i <12; i++) // let us get the values of the rainfall in mm now
    {
    do // use this do, so that, you can loop this event until the person enter the valid datarange
    {

    printf ("Enter the value %s rain average in mm [0-1000mm]:\n", months[i]); // data entry
    scanf ("%f", &rainfall[j][i]); // stores value in array,

    if (rainfall[j][i] < 0 || rainfall[j][i]> 1000)
    {
    printf ("Invalid Data Range\n");
    }
    }
    while (rainfall[j][i] < 0 || rainfall[j][i]> 1000);
    rainfallavey[j] += rainfall[j][i]; //this line is summing up the rainfall for each month to find the total rainfall for the year.
    }
}

for ( int j = 0; j < yearsnumber; j++) // presenting arrays with for loop
{
    printf ("Distribution Rainfall in Year %d\n", j+1);
    for (int i=0; i<12; i++)
        {
        printf ("Rainfall in %s: %.2f mm\n", months[i], rainfall[j][i]);
        }
        printf ("Total rain in the year %d: %.2f\n\n", j+1, rainfallavey[j]);
}

getchar();
return 0;
}

