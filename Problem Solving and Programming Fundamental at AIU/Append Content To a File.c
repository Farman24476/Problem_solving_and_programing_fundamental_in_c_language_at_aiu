#include<stdio.h>
#include<math.h>
int main()
{
  FILE *fptr;
  fptr=fopen("filename.text","a");
  fprintf(fptr,"\n Hi everybody");
  fprintf(fptr,"\n Hi everyone");
  fclose(fptr);






}
