#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GenerateSineTable(const char * filename)

{
 FILE *file = fopen(filename, "w");
 if (file == NULL)

 {
  printf ("ERROR in writing file");
 }
 for (int degree = 0; degree <= 360; degree++)
    {
        double radian = degree * (M_PI / 180.0); // M_PI is the Math.h pi constant /  Convert degree to radian
        double sineValue = sin(radian);
        fprintf(file, "%d deg %.3f\n", degree, sineValue); // Write to file
    }

    fclose(file);

}

int main()
{

    printf("\n--Math Tables Printout - Marcel Dorti Silva - All rights reserved--\n");
    GenerateSineTable("sinetable.txt");
    printf ("Sine Table generate in 'sinetable.txt' ");

    return 0;
}
