#include<stdio.h>
void myFunction(char name[],int age){

printf("Hello%s.    You are%d years old.\n", name, age);


} int main(){
myFunction("Liam", 3);
myFunction("Liam" , 30);
myFunction("Liam", 33);
myFunction("Liam", 35);
return 0;




}
