#include<stdio.h>
int main()
{
    int myNum[4]={20,30,232,355};
int *ptr =myNum;
int i;
for (i=0;i<4;i++)
printf("d\n",*(ptr+i));

return 0;




}
