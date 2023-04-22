/*2.	Write a program that reads a file containing a list of integers,
calculates the sum and average of the numbers, and writes the results to another file.
The input and output file names should be provided as command-line arguments.*/
#include<stdio.h>
#include<string.h>
int main ()
{
char file_name[256]; // declares character variable with 256 characters array
int number;
int sum=0;
int sumcount= 0 ;// declares the integer number: integer number, sum of the numbers in the file, sumcount, sum of the counts the while loop does

printf ("Enter the name of the .txt file: "); //human interface
fgets(file_name, sizeof(file_name), stdin); // gets the string stdin (Standard Input) - keyboard, and stores it into file_name char variable, file must be in the same directory of the project

file_name[strcspn(file_name, "\n")]=0; // removes the enter the human presses when enters a text

printf("After the filter, you entered: %s\n", file_name); // showing the input file was correctly selected

FILE*file = fopen(file_name, "r") ;// open the file in read mode "r"

if (file == NULL) // checks if the file could be successfully opened
    {
    printf("Error opening file.\n"); // returns 1 and error, if this is not displayed, it means the file was opened.
    return 1;
    }

while (fscanf (file, "%d", &number) != EOF) // only to test fscanf, check file*FILE, and then stored at %d (integer), in number until End of File
{
    sum+=number; // sum is number +1 at every part of the whileloop
    sumcount++; // sumcount is incremented on every interaction
}
fclose(file); // closes the file opened with "r" in the point FILE*file

printf ("The last number in the file is: %d\n", number); // showing the first number of the file
printf ("The sum of increments: %d\n", sumcount); // showing the number of counts
printf ("The sum of the numbers: %d\n", sum); // showing the number of counts

double average = (double)sum/sumcount; // declares a double variable (double word)
printf ("The average of the number in the files is: %.2f\n", average);

//part to publish it into a file//

char file_name_out[256]; // declares variable for the outfile where the info will be written to

printf ("Enter the name of the output .txt file: "); // human interface to get the string of the .txt file
fgets(file_name_out, sizeof(file_name_out), stdin); // get the string in the size of file_name_out from the stdin (Standard Input);
file_name_out[strcspn(file_name_out, "\n")]=0; // removes the \n (enter) from the string
strcat (file_name_out, ".txt"); // insert .txt in the file name

FILE*output_file = fopen(file_name_out, "w");

if (output_file == NULL) // checks if the file could be successfully written
  {
    printf("Error writing file.\n"); // returns 1 and error, if this is not displayed, it means the file was opened.
    return 1;
   }
fprintf(output_file, "The sum of the numbers: %d\n", sum);
fprintf(output_file, "The average of the numbers: %.2f\n", average);
fprintf(output_file, "The number of increments is %d\n", sumcount);
fclose(output_file);

printf("The results have been written into the %s file\n",file_name_out);

return 0;
}

