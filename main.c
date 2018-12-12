#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *pFile;
pFile = fopen("fileread.txt", "r");
printf("The Letter R: %s");
fclose(pFile);
}
//return 0;
