#include <stdio.h>
int main()
{
int myNum[0]={4,12,13,20};
*myNum =13;
*(myNum +1)=17;
printf("%d\n",*myNum);
printf("%d\n",*(myNum+1));
return 0;






}
