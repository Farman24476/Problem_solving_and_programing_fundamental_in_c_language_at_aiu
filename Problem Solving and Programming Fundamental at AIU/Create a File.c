#include<stdio.h>

#include<math.h>
int main()
{
FILE *fptr;
fptr=fopen("filename.text","w");
fclose(fptr);
return 0;

}
