#include<stdio.h>
#include<math.h>
int main()
{
    FILE *fptr;
    fptr=fopen("filename.text","w");
    fprintf(fptr,"Some text");
    fclose(fptr);






}
